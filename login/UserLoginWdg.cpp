#include "UserLoginWdg.h"
#include <QFile>
#include <QPixmap>
#include <QSound>
#include "../Room/RoomWdg.h"
#include "../stdafx.h"
#include "ServerAddressSet.h"
#include "../MeetingListModel/Meetinglistmodel.h"
#include "Setting/AppSetting.h"
#include "../eventcenter.h"
UserLoginWdg * UserLoginWdg::m_instance = NULL;;
UserLoginWdg * UserLoginWdg::GetInstance()   // 返回实例，一个登录的实例
{
	if(m_instance == NULL)
	{
		m_instance = new UserLoginWdg();
	}
	return m_instance;
}

UserLoginWdg::UserLoginWdg(QWidget *parent): QWidget(parent)  //login是个 widge类    主类，初始化信号槽
{
	m_loginType = LOGIN_TYPE_USER;
	ui.setupUi(this);                     //
	QFile qssFile(":/qss/login.qss");  //这个路径 不对啊？ 不应该是resource下面吗？
	QString qss;
	qssFile.open(QFile::ReadOnly);
	if(qssFile.isOpen())
	{  
		qss = QString(qssFile.readAll());
		this->setStyleSheet(qss);      //都是一个界面一个界面的sheet
		qssFile.close();
	}
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	ui.logoLabel->setPixmap(QPixmap(":/login/login/login_bg1.png"));  //这个在ui里面有，很大一个label ，这个是背景图啊！！
	ui.logoLabel->setScaledContents(true);
	/*连接信号槽*/
	connect(ui.countBtn,SIGNAL(clicked()),this,SLOT(countBtnClicked()));    //全是button clicked事件
	connect(ui.meetingBtn,SIGNAL(clicked()),this,SLOT(meetingBtnClicked()));   //切换
	connect(ui.closeBtn,SIGNAL(clicked()),this,SLOT(close()));
	connect(ui.loginBtn,SIGNAL(clicked()),this,SLOT(loginBtnClicked()));      //登录
	
	connect(ui.setBtn,SIGNAL(clicked()),this,SLOT(setBtnClicked()));         //服务器设置
	connect(ui.saveCheckBox,SIGNAL(stateChanged(int)),this,SLOT(checkBoxClicked(int))); //保存记录
	connect(ui.freeCheckBox,SIGNAL(stateChanged(int)),this,SLOT(checkBoxClicked(int)));
	ui.freeCheckBox->setVisible(false);

	/*从网页直接登录*/
	connect(this,SIGNAL(loginFromWebWithUserId()),this,SLOT(countBtnClicked()));
	connect(this,SIGNAL(loginFromWebWithMeetingRoom()),this,SLOT(meetingBtnClicked()));
	connect(this,SIGNAL(loginFromWebToLogin()),this,SLOT(loginBtnClicked()));
	isWeb = false;


	/*initGodsAnyThingBySean();*/
}
void UserLoginWdg::initGodsAnyThingBySean(){             //登录初始化操作！！！

   QPalette countPale;
   QPalette meetingPale;  //创建画面
   countPale.setColor(QPalette::ButtonText,QColor(0, 0, 0));    //整个的设计好像并不是到 ui文件上弄的，而是直接在代码里
   meetingPale.setColor(QPalette::ButtonText,QColor(255,255,255));//修改画板
   ui.countBtn->setPalette(countPale);  // 这个是账号登录
   ui.meetingBtn->setPalette(meetingPale);  //这个是会议登录那个    应用画板

	QPalette linePale;
	linePale.setColor(QPalette::Text,QColor(255,255,255));    //字体颜色

	nikeNameLineEdit = new QLineEdit(this);                   //line edit 都是 代码实现的
	nikeNameLineEdit->setGeometry(140,135,200,60);            //位置
	nikeNameLineEdit->setPlaceholderText("请输入您的昵称");   //文本字符   //   这里设置的是会议登录的内容
	nikeNameLineEdit->setObjectName("acccountLineEdit");       //控件名字  setObjectName是给某一个对象设置名称，
	nikeNameLineEdit->setPalette(linePale);                    //画板         所以这个重复了吧？上面这个错了吧
	nikeNameLineEdit->setHidden(true);
	connect(nikeNameLineEdit,SIGNAL(editingFinished()),this,SLOT(lineEditeFinish()));  //信号关联函数

	acccountLineEdit = new QLineEdit(this);           
	acccountLineEdit->setGeometry(140,158,200,60);
	acccountLineEdit->setPlaceholderText("请输入您的账号"); //   这里设置的是  账号登录的内容
	acccountLineEdit->setObjectName("acccountLineEdit");
	acccountLineEdit->setPalette(linePale);

	passWordLineEdit = new QLineEdit(this);
	passWordLineEdit->setGeometry(140,195,200,60);
	passWordLineEdit->setPlaceholderText("请输入您的密码");
	passWordLineEdit->setObjectName("acccountLineEdit");    //为什么对象名称都是一个？难道是方便格式？？
	passWordLineEdit->setEchoMode(QLineEdit::Password);
	passWordLineEdit->setPalette(linePale);

	connect(passWordLineEdit,SIGNAL(returnPressed()),this,SLOT(loginBtnClicked()));

	addLoadingWidget();    // 进入 加载 画面！！！


	if (AppSetting::GetInstance()->GetLoginRemberAPWordStatus()  == 2 && AppSetting::GetInstance()->GetLoginStyle() == 1)
	{
		acccountLineEdit->setText(AppSetting::GetInstance()->GetLoginAccount());//这个是记住账号密码功能，设置账号和密码
		passWordLineEdit->setText(AppSetting::GetInstance()->GetLoginPWord());
		ui.saveCheckBox->setChecked(true);
	}else{
		 ui.saveCheckBox->setChecked(false);
	}
	  
	//web登录
	if (isWeb)    //还可以web登录？？
	{
		if (logType.toInt() ==  1)
		{
			//账号登录
			emit loginFromWebWithUserId();
			acccountLineEdit->setHidden(false);
			passWordLineEdit->setHidden(false);
			acccountLineEdit->setText(userId);
			passWordLineEdit->setText(passWord);
			emit loginFromWebToLogin();


		}
		else 
		{
			//会议号
			emit loginFromWebWithMeetingRoom();
			nikeNameLineEdit->setText(userId);
			acccountLineEdit->setText(roomNum);
			passWordLineEdit->setText(passWord);
			emit loginFromWebToLogin();

		}
	}

	QString serverStr  = AppSetting::GetInstance()->GetServerAddress();  //从其他类里面调用函数   在seting里面
	if (serverStr.length() < 2)
	{
		loginAnimation("请点击设置,来设置服务器地址！");  //判断一下服务器地址有没有设置
	}
}


void UserLoginWdg::addLoadingWidget(){                  //加载 登录 等待条

	contentWidget = new QWidget(this);                  // 这个是 绑定在 login界面上，并设置好 位置的 widget。
	contentWidget->setGeometry(4,85,442,250);
	loadWidget = new MeetingLoadingWidget(contentWidget);//  里面的是父 界面？？
	contentWidget->setHidden(true);                       // 父界面 隐藏
	connect(loadWidget, SIGNAL(toHiddenLoadWidget()), this, SLOT(getSignalToHiddenLoadWidget())); //
	loadWidget->startWithBtnTitleAndTipString(true,"取消","正在登录请稍后...");  //  取消 是  按钮，  正在登录是文字
}


void UserLoginWdg::mouseMoveEvent(QMouseEvent *event){

	if (mouse_pressed)                            //鼠标 移动事件。。。
	{
		QPoint movePoint = event->globalPos();     //
		this->move(movePoint - mouse_movePoint);   //
	}
}
 
void UserLoginWdg::mousePressEvent(QMouseEvent *event){     //鼠标按下去事件

	if (event->button() == Qt::LeftButton)
	{
		mouse_pressed = true;                //鼠标是不是按了
		mouse_movePoint = event->pos();    //鼠标位置
	}
}

void UserLoginWdg::mouseReleaseEvent(QMouseEvent *event){

	mouse_pressed = false;  //鼠标释放事件
}

/************账号登录*****************/
void UserLoginWdg::countBtnClicked(){         // 账号登录  按下，触发的 信号 函数

	m_loginType = LOGIN_TYPE_USER;         // 0

	if (isWeb)
	{
		nikeNameLineEdit->setHidden(true);
		nikeNameLineEdit->clear();
		acccountLineEdit->setGeometry(140,158,200,60);
		passWordLineEdit->setGeometry(140,195,200,60);

	}else
	{
		nikeNameLineEdit->setHidden(true);           //nikename 被 隐藏了
		nikeNameLineEdit->clear();
		acccountLineEdit->setGeometry(140,158,200,60);
		acccountLineEdit->clear();
		acccountLineEdit->setPlaceholderText("请输入您的账号");  //这只是一个输入文本框 而已
		passWordLineEdit->setGeometry(140,195,200,60);
		passWordLineEdit->clear();
	}
    ui.saveCheckBox->setVisible(true);             //可见
	AppSetting::GetInstance()->ReadValues();       //               这个是初始化 什么 设备吗？？？
	if ( AppSetting::GetInstance()->GetLoginStyle() == 1 && AppSetting::GetInstance()->GetLoginRemberAPWordStatus()  == 2 )
	{
		acccountLineEdit->setText(AppSetting::GetInstance()->GetLoginAccount());
		passWordLineEdit->setText(AppSetting::GetInstance()->GetLoginPWord());   //保存 原来记录的值
		ui.saveCheckBox->setChecked(true);
	}else ui.saveCheckBox->setChecked(false);

	ui.logoLabel->setPixmap(QPixmap(":/login/login/login_bg1.png"));
    ui.countBtn->setChecked(true);
	ui.meetingBtn->setChecked(false);                       //按钮设置为 可按

	QPalette pal1;
	QPalette pal2;
	pal1.setColor(QPalette::ButtonText,QColor(255,255,255));
	pal2.setColor(QPalette::ButtonText,QColor(0, 0, 0));
	ui.meetingBtn->setPalette(pal1);
	ui.countBtn->setPalette(pal2);                 //设置画板的颜色 ，选中的画板变色。
	
}
/************会议号登录*****************/
void UserLoginWdg::meetingBtnClicked(){                       //和 账号登录的 原来差不多，都只是完成了那个界面的绘制
	m_loginType = LOGIN_TYPE_ROOMNO;
	if (isWeb)
	{
		nikeNameLineEdit->setHidden(false);
		acccountLineEdit->setGeometry(140,170,200,60);
		acccountLineEdit->setPlaceholderText("请输入您房间号");
		passWordLineEdit->setGeometry(140,210,200,60);
	}else{
		nikeNameLineEdit->setHidden(false);
		acccountLineEdit->setGeometry(140,170,200,60);
		acccountLineEdit->clear();
		acccountLineEdit->setPlaceholderText("请输入您房间号");
		passWordLineEdit->setGeometry(140,210,200,60);
		passWordLineEdit->clear();
	}
	ui.saveCheckBox->setVisible(false);
	ui.logoLabel->setPixmap(QPixmap(":/login/login/login_bg2.png"));
	ui.countBtn->setChecked(false);
	ui.meetingBtn->setChecked(true);

	QPalette pal1;
	QPalette pal2;
	pal1.setColor(QPalette::ButtonText,QColor(255,255,255));
	pal2.setColor(QPalette::ButtonText,QColor(0, 0, 0));
	ui.meetingBtn->setPalette(pal2);
	ui.countBtn->setPalette(pal1);

}

/*checkbox 选择*/
void UserLoginWdg::checkBoxClicked(int status){              //来自 ui  savecheck的 信号函数，保存密码？


	if (QCheckBox* box = dynamic_cast<QCheckBox*>(sender())){
		//send_key(btn->whatsThis());
		if (box->text() == "保存密码")
		{
		
			qDebug()<<"保存密码"<<"status"<<status;

			if (m_loginType == LOGIN_TYPE_USER)
			{
				AppSetting::GetInstance()->SetLoginStyle(1);
				if (status == 2)//选中状态
				{
					AppSetting::GetInstance()->SetLoginRemberAPWordStatus(2);

				}else
					AppSetting::GetInstance()->SetLoginRemberAPWordStatus(0);

			}
		
		}
		else
			qDebug()<<"免费体验"<<"status"<<status;

	}

}
/*设置*/
void UserLoginWdg::setBtnClicked(){                //设置按钮，点击之后  打开一个新窗口

	ServerAddressSet *setWdg = new ServerAddressSet();    //创建 这个 窗口的类，然后show
	setWdg->setAttribute(Qt::WA_ShowModal,true);        //设置成模态对话框，关掉之前不能与其他交互。
	setWdg->show();

}
bool UserLoginWdg::judgeLoadingStatus(LOGIN_TYPE loinType,QString userNme,QString passWord,QString nikeName){


	if (loinType == LOGIN_TYPE_USER )
	{

		if (userNme.length() == 0)                    //判断 有没有 正确 输入  用户名和 密码
		{
			loginAnimation("请输入用户名!");
			return false;
		}
		if (passWord.length() == 0)
		{

			loginAnimation("密码不能为空!");
			return false;
		}
		return true;

	}else{

		if (nikeName.length() == 0)
		{

			loginAnimation("请输入昵称!");
			return false;
		}
		if (userNme.length() == 0)
		{
			loginAnimation("请输入用户名!");
			return false;
		}
		if (passWord.length() == 0)
		{
			//loginAnimation("密码不能为空!");
			//return false;
		}
		return true;
	}
}

/*登录*/
void UserLoginWdg::loginBtnClicked()                                      //登录按钮的 信号函数
{

	
	QString serverStr  = AppSetting::GetInstance()->GetServerAddress();   //获得服务器的地址
	if (serverStr.length() < 2)
	{
		loginAnimation("请点击设置,来设置服务器地址！");       //滑动的动画 显示
		return;
	}
 	contentWidget->setHidden(false);                         //这个好像是那个  登录等待界面
	if(g_pMeetingFrame!=NULL)                               //这里就要用到那个 MeetingFrame 了
	{
		if(m_loginType == LOGIN_TYPE_USER)
		{
			QString strAccount = acccountLineEdit->text();            //获取输入的文字信息
			QString strPassword = passWordLineEdit->text();
			AppSetting::GetInstance()->SetLoginAccount(strAccount);        //保存 信息？
			AppSetting::GetInstance()->SetLoginPWord(strPassword);
			if (judgeLoadingStatus(m_loginType,strAccount,strPassword,passWordLineEdit->text()))  //上面那个判断,没输入好就加动画
			{
				g_pMeetingFrame->Login(strAccount.toLatin1().data(),
					strPassword.toLatin1().data(),0);       //!!!!!!!!!!//这个才是 与服务器交互的核心？？，如果登录不上，好像会一直卡在加载界面
			}
			else
				contentWidget->setHidden(true);         //错误，就不加载 登录等待界面
		}
		else
		{
			QString strNickName = nikeNameLineEdit->text();          //另外一种模式？ 暂不看
			QString strAccount = acccountLineEdit->text();
			QString strPassword = passWordLineEdit->text();

			if (judgeLoadingStatus(m_loginType,strAccount,strPassword,strNickName))
			{
				g_pMeetingFrame->LoginWithRoomNo(strNickName.toUtf8().data(),
					strPassword.toLatin1().data(),0,strAccount.toInt());
			}
			else
			contentWidget->setHidden(true);
			
		}
	}
		AppSetting::GetInstance()->Save();
	

}


UserLoginWdg::~UserLoginWdg()
{
	

}

void UserLoginWdg::OnClose()
{
	hide();
	if(g_pMeetingFrame)                     //这个 g_pMeetingFrame  是定义在eventcenter里面的 全局变量
	{
		g_pMeetingFrame->Logout();
		g_pMeetingFrame->Release();         // 失败了还需要 释放
	}
	qApp->quit();
}
//点击取消登陆回调
void UserLoginWdg::getSignalToHiddenLoadWidget(){
	contentWidget->setHidden(true);                       //取消 登录界面等待
	//this->hide();
	//MeetingListWdg::GetTableViewInstance()->show();
}


//登录失败
void UserLoginWdg::OnLoginFailed()                                 //哪个调用的你。。应该是在通信框架里面？
{

	contentWidget->setHidden(true);

	loginAnimation("用户名或密码错误，请重新输入！");
	if (isWeb)
	{
		isWeb = false;
	}

}

//登录成功
void UserLoginWdg::OnLoginSuccess()    //和登录失败一样   
{
	qDebug()<<QString("登录成功");
	if(m_loginType == LOGIN_TYPE_USER)
	{
		contentWidget->setHidden(true);
		if(g_pMeetingFrame!=NULL)
		{
			if (isWeb)
			{
				this->hide();
				g_pMeetingFrame->EnterRoom(roomNum.toUInt());
				EventCenter::GetInstance()->setRoomId(roomNum.toUInt());
				RoomWdg::GetInstance()->show();
				
			}
			else
			{
				g_pMeetingFrame->GetRoomList();                         //从通信中获取 房间的列表，这里只管发送请求啊
				this->hide();                                        //隐藏现在的登录， 调用 meetinglistwdg
				MeetingListWdg::GetTableViewInstance()->show();      //登录完了，跳转到  房间列表
			}                       //这个是一个自定义的函数
		}
		
	}
	else          //另外一种 匿名的 不看
	{

		this->hide();
		if(g_pMeetingFrame!=NULL)
		{
			QString strAccount = acccountLineEdit->text();
			g_pMeetingFrame->EnterRoom(strAccount.toUInt());
			EventCenter::GetInstance()->setRoomId(strAccount.toUInt());
		}
		RoomWdg::GetInstance()->show();
	}
}

void UserLoginWdg::OnGetRoomList(int total)    //这个来自 eventcenter的 信号函数， 信号来自MeetingConnlmpl的解析完json数据，保存到链表中了
{
	MeetingListModel::GetInstance()->insertRows(0,total);
}


void UserLoginWdg::loginAnimation(QString animationStr){           //动画效果
	animation = new SeanAnimation(this);     //这些动画都还是自己设计的类嘛？ seanAnimation   //  其实就是 一个横向移动， 参数就是你要打的字。
	animation->parentWdg = this;
	animation->setTiptitleWithString(animationStr);              //
	animation->setAttribute(Qt::WA_ShowModal,true);               //模态对话框
	animation->show();
}
