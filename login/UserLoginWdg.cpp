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
UserLoginWdg * UserLoginWdg::GetInstance()   // ����ʵ����һ����¼��ʵ��
{
	if(m_instance == NULL)
	{
		m_instance = new UserLoginWdg();
	}
	return m_instance;
}

UserLoginWdg::UserLoginWdg(QWidget *parent): QWidget(parent)  //login�Ǹ� widge��    ���࣬��ʼ���źŲ�
{
	m_loginType = LOGIN_TYPE_USER;
	ui.setupUi(this);                     //
	QFile qssFile(":/qss/login.qss");  //���·�� ���԰��� ��Ӧ����resource������
	QString qss;
	qssFile.open(QFile::ReadOnly);
	if(qssFile.isOpen())
	{  
		qss = QString(qssFile.readAll());
		this->setStyleSheet(qss);      //����һ������һ�������sheet
		qssFile.close();
	}
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
	ui.logoLabel->setPixmap(QPixmap(":/login/login/login_bg1.png"));  //�����ui�����У��ܴ�һ��label ������Ǳ���ͼ������
	ui.logoLabel->setScaledContents(true);
	/*�����źŲ�*/
	connect(ui.countBtn,SIGNAL(clicked()),this,SLOT(countBtnClicked()));    //ȫ��button clicked�¼�
	connect(ui.meetingBtn,SIGNAL(clicked()),this,SLOT(meetingBtnClicked()));   //�л�
	connect(ui.closeBtn,SIGNAL(clicked()),this,SLOT(close()));
	connect(ui.loginBtn,SIGNAL(clicked()),this,SLOT(loginBtnClicked()));      //��¼
	
	connect(ui.setBtn,SIGNAL(clicked()),this,SLOT(setBtnClicked()));         //����������
	connect(ui.saveCheckBox,SIGNAL(stateChanged(int)),this,SLOT(checkBoxClicked(int))); //�����¼
	connect(ui.freeCheckBox,SIGNAL(stateChanged(int)),this,SLOT(checkBoxClicked(int)));
	ui.freeCheckBox->setVisible(false);

	/*����ҳֱ�ӵ�¼*/
	connect(this,SIGNAL(loginFromWebWithUserId()),this,SLOT(countBtnClicked()));
	connect(this,SIGNAL(loginFromWebWithMeetingRoom()),this,SLOT(meetingBtnClicked()));
	connect(this,SIGNAL(loginFromWebToLogin()),this,SLOT(loginBtnClicked()));
	isWeb = false;


	/*initGodsAnyThingBySean();*/
}
void UserLoginWdg::initGodsAnyThingBySean(){             //��¼��ʼ������������

   QPalette countPale;
   QPalette meetingPale;  //��������
   countPale.setColor(QPalette::ButtonText,QColor(0, 0, 0));    //��������ƺ��񲢲��ǵ� ui�ļ���Ū�ģ�����ֱ���ڴ�����
   meetingPale.setColor(QPalette::ButtonText,QColor(255,255,255));//�޸Ļ���
   ui.countBtn->setPalette(countPale);  // ������˺ŵ�¼
   ui.meetingBtn->setPalette(meetingPale);  //����ǻ����¼�Ǹ�    Ӧ�û���

	QPalette linePale;
	linePale.setColor(QPalette::Text,QColor(255,255,255));    //������ɫ

	nikeNameLineEdit = new QLineEdit(this);                   //line edit ���� ����ʵ�ֵ�
	nikeNameLineEdit->setGeometry(140,135,200,60);            //λ��
	nikeNameLineEdit->setPlaceholderText("�����������ǳ�");   //�ı��ַ�   //   �������õ��ǻ����¼������
	nikeNameLineEdit->setObjectName("acccountLineEdit");       //�ؼ�����  setObjectName�Ǹ�ĳһ�������������ƣ�
	nikeNameLineEdit->setPalette(linePale);                    //����         ��������ظ��˰ɣ�����������˰�
	nikeNameLineEdit->setHidden(true);
	connect(nikeNameLineEdit,SIGNAL(editingFinished()),this,SLOT(lineEditeFinish()));  //�źŹ�������

	acccountLineEdit = new QLineEdit(this);           
	acccountLineEdit->setGeometry(140,158,200,60);
	acccountLineEdit->setPlaceholderText("�����������˺�"); //   �������õ���  �˺ŵ�¼������
	acccountLineEdit->setObjectName("acccountLineEdit");
	acccountLineEdit->setPalette(linePale);

	passWordLineEdit = new QLineEdit(this);
	passWordLineEdit->setGeometry(140,195,200,60);
	passWordLineEdit->setPlaceholderText("��������������");
	passWordLineEdit->setObjectName("acccountLineEdit");    //Ϊʲô�������ƶ���һ�����ѵ��Ƿ����ʽ����
	passWordLineEdit->setEchoMode(QLineEdit::Password);
	passWordLineEdit->setPalette(linePale);

	connect(passWordLineEdit,SIGNAL(returnPressed()),this,SLOT(loginBtnClicked()));

	addLoadingWidget();    // ���� ���� ���棡����


	if (AppSetting::GetInstance()->GetLoginRemberAPWordStatus()  == 2 && AppSetting::GetInstance()->GetLoginStyle() == 1)
	{
		acccountLineEdit->setText(AppSetting::GetInstance()->GetLoginAccount());//����Ǽ�ס�˺����빦�ܣ������˺ź�����
		passWordLineEdit->setText(AppSetting::GetInstance()->GetLoginPWord());
		ui.saveCheckBox->setChecked(true);
	}else{
		 ui.saveCheckBox->setChecked(false);
	}
	  
	//web��¼
	if (isWeb)    //������web��¼����
	{
		if (logType.toInt() ==  1)
		{
			//�˺ŵ�¼
			emit loginFromWebWithUserId();
			acccountLineEdit->setHidden(false);
			passWordLineEdit->setHidden(false);
			acccountLineEdit->setText(userId);
			passWordLineEdit->setText(passWord);
			emit loginFromWebToLogin();


		}
		else 
		{
			//�����
			emit loginFromWebWithMeetingRoom();
			nikeNameLineEdit->setText(userId);
			acccountLineEdit->setText(roomNum);
			passWordLineEdit->setText(passWord);
			emit loginFromWebToLogin();

		}
	}

	QString serverStr  = AppSetting::GetInstance()->GetServerAddress();  //��������������ú���   ��seting����
	if (serverStr.length() < 2)
	{
		loginAnimation("��������,�����÷�������ַ��");  //�ж�һ�·�������ַ��û������
	}
}


void UserLoginWdg::addLoadingWidget(){                  //���� ��¼ �ȴ���

	contentWidget = new QWidget(this);                  // ����� ���� login�����ϣ������ú� λ�õ� widget��
	contentWidget->setGeometry(4,85,442,250);
	loadWidget = new MeetingLoadingWidget(contentWidget);//  ������Ǹ� ���棿��
	contentWidget->setHidden(true);                       // ������ ����
	connect(loadWidget, SIGNAL(toHiddenLoadWidget()), this, SLOT(getSignalToHiddenLoadWidget())); //
	loadWidget->startWithBtnTitleAndTipString(true,"ȡ��","���ڵ�¼���Ժ�...");  //  ȡ�� ��  ��ť��  ���ڵ�¼������
}


void UserLoginWdg::mouseMoveEvent(QMouseEvent *event){

	if (mouse_pressed)                            //��� �ƶ��¼�������
	{
		QPoint movePoint = event->globalPos();     //
		this->move(movePoint - mouse_movePoint);   //
	}
}
 
void UserLoginWdg::mousePressEvent(QMouseEvent *event){     //��갴��ȥ�¼�

	if (event->button() == Qt::LeftButton)
	{
		mouse_pressed = true;                //����ǲ��ǰ���
		mouse_movePoint = event->pos();    //���λ��
	}
}

void UserLoginWdg::mouseReleaseEvent(QMouseEvent *event){

	mouse_pressed = false;  //����ͷ��¼�
}

/************�˺ŵ�¼*****************/
void UserLoginWdg::countBtnClicked(){         // �˺ŵ�¼  ���£������� �ź� ����

	m_loginType = LOGIN_TYPE_USER;         // 0

	if (isWeb)
	{
		nikeNameLineEdit->setHidden(true);
		nikeNameLineEdit->clear();
		acccountLineEdit->setGeometry(140,158,200,60);
		passWordLineEdit->setGeometry(140,195,200,60);

	}else
	{
		nikeNameLineEdit->setHidden(true);           //nikename �� ������
		nikeNameLineEdit->clear();
		acccountLineEdit->setGeometry(140,158,200,60);
		acccountLineEdit->clear();
		acccountLineEdit->setPlaceholderText("�����������˺�");  //��ֻ��һ�������ı��� ����
		passWordLineEdit->setGeometry(140,195,200,60);
		passWordLineEdit->clear();
	}
    ui.saveCheckBox->setVisible(true);             //�ɼ�
	AppSetting::GetInstance()->ReadValues();       //               ����ǳ�ʼ�� ʲô �豸�𣿣���
	if ( AppSetting::GetInstance()->GetLoginStyle() == 1 && AppSetting::GetInstance()->GetLoginRemberAPWordStatus()  == 2 )
	{
		acccountLineEdit->setText(AppSetting::GetInstance()->GetLoginAccount());
		passWordLineEdit->setText(AppSetting::GetInstance()->GetLoginPWord());   //���� ԭ����¼��ֵ
		ui.saveCheckBox->setChecked(true);
	}else ui.saveCheckBox->setChecked(false);

	ui.logoLabel->setPixmap(QPixmap(":/login/login/login_bg1.png"));
    ui.countBtn->setChecked(true);
	ui.meetingBtn->setChecked(false);                       //��ť����Ϊ �ɰ�

	QPalette pal1;
	QPalette pal2;
	pal1.setColor(QPalette::ButtonText,QColor(255,255,255));
	pal2.setColor(QPalette::ButtonText,QColor(0, 0, 0));
	ui.meetingBtn->setPalette(pal1);
	ui.countBtn->setPalette(pal2);                 //���û������ɫ ��ѡ�еĻ����ɫ��
	
}
/************����ŵ�¼*****************/
void UserLoginWdg::meetingBtnClicked(){                       //�� �˺ŵ�¼�� ԭ����࣬��ֻ��������Ǹ�����Ļ���
	m_loginType = LOGIN_TYPE_ROOMNO;
	if (isWeb)
	{
		nikeNameLineEdit->setHidden(false);
		acccountLineEdit->setGeometry(140,170,200,60);
		acccountLineEdit->setPlaceholderText("�������������");
		passWordLineEdit->setGeometry(140,210,200,60);
	}else{
		nikeNameLineEdit->setHidden(false);
		acccountLineEdit->setGeometry(140,170,200,60);
		acccountLineEdit->clear();
		acccountLineEdit->setPlaceholderText("�������������");
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

/*checkbox ѡ��*/
void UserLoginWdg::checkBoxClicked(int status){              //���� ui  savecheck�� �źź������������룿


	if (QCheckBox* box = dynamic_cast<QCheckBox*>(sender())){
		//send_key(btn->whatsThis());
		if (box->text() == "��������")
		{
		
			qDebug()<<"��������"<<"status"<<status;

			if (m_loginType == LOGIN_TYPE_USER)
			{
				AppSetting::GetInstance()->SetLoginStyle(1);
				if (status == 2)//ѡ��״̬
				{
					AppSetting::GetInstance()->SetLoginRemberAPWordStatus(2);

				}else
					AppSetting::GetInstance()->SetLoginRemberAPWordStatus(0);

			}
		
		}
		else
			qDebug()<<"�������"<<"status"<<status;

	}

}
/*����*/
void UserLoginWdg::setBtnClicked(){                //���ð�ť�����֮��  ��һ���´���

	ServerAddressSet *setWdg = new ServerAddressSet();    //���� ��� ���ڵ��࣬Ȼ��show
	setWdg->setAttribute(Qt::WA_ShowModal,true);        //���ó�ģ̬�Ի��򣬹ص�֮ǰ����������������
	setWdg->show();

}
bool UserLoginWdg::judgeLoadingStatus(LOGIN_TYPE loinType,QString userNme,QString passWord,QString nikeName){


	if (loinType == LOGIN_TYPE_USER )
	{

		if (userNme.length() == 0)                    //�ж� ��û�� ��ȷ ����  �û����� ����
		{
			loginAnimation("�������û���!");
			return false;
		}
		if (passWord.length() == 0)
		{

			loginAnimation("���벻��Ϊ��!");
			return false;
		}
		return true;

	}else{

		if (nikeName.length() == 0)
		{

			loginAnimation("�������ǳ�!");
			return false;
		}
		if (userNme.length() == 0)
		{
			loginAnimation("�������û���!");
			return false;
		}
		if (passWord.length() == 0)
		{
			//loginAnimation("���벻��Ϊ��!");
			//return false;
		}
		return true;
	}
}

/*��¼*/
void UserLoginWdg::loginBtnClicked()                                      //��¼��ť�� �źź���
{

	
	QString serverStr  = AppSetting::GetInstance()->GetServerAddress();   //��÷������ĵ�ַ
	if (serverStr.length() < 2)
	{
		loginAnimation("��������,�����÷�������ַ��");       //�����Ķ��� ��ʾ
		return;
	}
 	contentWidget->setHidden(false);                         //����������Ǹ�  ��¼�ȴ�����
	if(g_pMeetingFrame!=NULL)                               //�����Ҫ�õ��Ǹ� MeetingFrame ��
	{
		if(m_loginType == LOGIN_TYPE_USER)
		{
			QString strAccount = acccountLineEdit->text();            //��ȡ�����������Ϣ
			QString strPassword = passWordLineEdit->text();
			AppSetting::GetInstance()->SetLoginAccount(strAccount);        //���� ��Ϣ��
			AppSetting::GetInstance()->SetLoginPWord(strPassword);
			if (judgeLoadingStatus(m_loginType,strAccount,strPassword,passWordLineEdit->text()))  //�����Ǹ��ж�,û����þͼӶ���
			{
				g_pMeetingFrame->Login(strAccount.toLatin1().data(),
					strPassword.toLatin1().data(),0);       //!!!!!!!!!!//������� ������������ĺ��ģ����������¼���ϣ������һֱ���ڼ��ؽ���
			}
			else
				contentWidget->setHidden(true);         //���󣬾Ͳ����� ��¼�ȴ�����
		}
		else
		{
			QString strNickName = nikeNameLineEdit->text();          //����һ��ģʽ�� �ݲ���
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
	if(g_pMeetingFrame)                     //��� g_pMeetingFrame  �Ƕ�����eventcenter����� ȫ�ֱ���
	{
		g_pMeetingFrame->Logout();
		g_pMeetingFrame->Release();         // ʧ���˻���Ҫ �ͷ�
	}
	qApp->quit();
}
//���ȡ����½�ص�
void UserLoginWdg::getSignalToHiddenLoadWidget(){
	contentWidget->setHidden(true);                       //ȡ�� ��¼����ȴ�
	//this->hide();
	//MeetingListWdg::GetTableViewInstance()->show();
}


//��¼ʧ��
void UserLoginWdg::OnLoginFailed()                                 //�ĸ����õ��㡣��Ӧ������ͨ�ſ�����棿
{

	contentWidget->setHidden(true);

	loginAnimation("�û���������������������룡");
	if (isWeb)
	{
		isWeb = false;
	}

}

//��¼�ɹ�
void UserLoginWdg::OnLoginSuccess()    //�͵�¼ʧ��һ��   
{
	qDebug()<<QString("��¼�ɹ�");
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
				g_pMeetingFrame->GetRoomList();                         //��ͨ���л�ȡ ������б�����ֻ�ܷ�������
				this->hide();                                        //�������ڵĵ�¼�� ���� meetinglistwdg
				MeetingListWdg::GetTableViewInstance()->show();      //��¼���ˣ���ת��  �����б�
			}                       //�����һ���Զ���ĺ���
		}
		
	}
	else          //����һ�� ������ ����
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

void UserLoginWdg::OnGetRoomList(int total)    //������� eventcenter�� �źź����� �ź�����MeetingConnlmpl�Ľ�����json���ݣ����浽��������
{
	MeetingListModel::GetInstance()->insertRows(0,total);
}


void UserLoginWdg::loginAnimation(QString animationStr){           //����Ч��
	animation = new SeanAnimation(this);     //��Щ�����������Լ���Ƶ���� seanAnimation   //  ��ʵ���� һ�������ƶ��� ����������Ҫ����֡�
	animation->parentWdg = this;
	animation->setTiptitleWithString(animationStr);              //
	animation->setAttribute(Qt::WA_ShowModal,true);               //ģ̬�Ի���
	animation->show();
}
