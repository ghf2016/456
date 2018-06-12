#include "Meetinglistwdg.h"
#include <QDebug>
#include <QList>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QScrollBar>
#include "SeanTableViewDelegate.h"
#include "../Room/RoomWdg.h"
#include "../stdafx.h"
#include "MeetingDetailDelegate.h"
#include "../eventcenter.h"

MeetingListWdg *MeetingListWdg::t_instance = NULL;

MeetingListWdg *MeetingListWdg::GetTableViewInstance()   //
{

	if (t_instance == NULL)
	{
		t_instance = new MeetingListWdg(); // 这个函数相当于 新建一个 meetinglistwdg类， 然后用这个指针去调用
	}
	return t_instance;                     //

}

MeetingListWdg::MeetingListWdg(QWidget *parent)   //初始化
	: QWidget(parent)                          //
{                                              //
	ui.setupUi(this);                          //
	
	QFile qssFile(":/qss/login.qss");          // 还是用的login的样式表
	QString qss;                               //
	qssFile.open(QFile::ReadOnly);             //
	if(qssFile.isOpen())
	{   
		qss = QString(qssFile.readAll());      //
		this->setStyleSheet(qss);              //
		qssFile.close();                       //
	}

	setWindowFlags(Qt::FramelessWindowHint);//这个是widget的标题栏和边框去掉！！！！
	setAttribute(Qt::WA_TranslucentBackground);

	ui.backLabel->setPixmap(QPixmap(":/login/login/login_bg1.png"));   //读取背景图
	ui.backLabel->setScaledContents(true); //


	QLabel *tBackImage = new QLabel(this);
	ui.tBackImage->setGeometry(4,85,442,250);                            //白底
	ui.tBackImage->setPixmap(QPixmap(":/login/login/whiteImage.png"));

	connect(ui.closeBtn,SIGNAL(clicked()),this,SLOT(close()));           //只有2个关联函数
	connect(MeetingRoomWordWdg::GetInstance(),SIGNAL(toEnterRoomWithRoomId(uint32_t)),this,SLOT(getRoomIdToEnterRoom(uint32_t)));
	                                                                    // 
	InitDeviceList();                              // 初始化设备？？！！！包括了 table的样式等
}
MeetingListWdg::~MeetingListWdg()
{
}

void MeetingListWdg::InitDeviceList()                  //这个是     这个都是 有 定义的类啊。。
{
	//qDebug()<<"MeetingListModel::GetInstance()``1111 == "<<MeetingListModel::GetInstance()->m_total;
	// setmodel 数据


	ui.myTableView->setModel(MeetingListModel::GetInstance());//只有这个地方用了model， 这里是 数据的管理！！！！！

	//第五列btn自定义
	ButtonDelegate *btnDelegate = new ButtonDelegate(this); //这个是初始化了  那个 tableview那个列表，一个空白的，我们要在上面加按钮
	ui.myTableView->viewport()->installEventFilter(btnDelegate);//  事件过滤？  定义在buttonDelegate里面的。。。eventFilter 吗？
	ui.myTableView->setItemDelegateForColumn(4,btnDelegate);

	MeetingDetailDelegate *mDelegate  =  new MeetingDetailDelegate(this); //
	ui.myTableView->viewport()->installEventFilter(mDelegate);            //
	ui.myTableView->setItemDelegateForColumn(1,mDelegate);               //这里是中间件  ，动态渲染！！！！大家都是tableview的调用


	//设置cell样式
	SeanTableViewDelegate *seanDelegate = new SeanTableViewDelegate(ui.myTableView);
	ui.myTableView->setItemDelegate(seanDelegate);
	//btn点击事件    

	// 进入房间点击事件 针对的是button
	connect(btnDelegate,SIGNAL(sendTableViewNumberRowAndWorth(int,int)),this,SLOT(getFromButtonDelegateWithRowAndBool(int,int)));
	//一般这个参数是this，但是这个是初始化的别的类的信号函数

	for(int i = 0 ; i < 5;i ++)                                 //一共5个房间？？
	{
		ui.myTableView->horizontalHeader()->setResizeMode(i,QHeaderView::Fixed);
		if (i == 1)
		{
			ui.myTableView->setColumnWidth(i,180);              // 每一列的长度 还不太一样。
		}else if (i == 4)
		{
			ui.myTableView->setColumnWidth(i,80);
		}
		else{
			ui.myTableView->setColumnWidth(i,(this->width()-180-80)/3 - 3);   //其他的长度
		}
		
		
	}

	ui.myTableView->setSelectionBehavior(QAbstractItemView::SelectRows);/*选中某行*/    
	//ui.myTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.myTableView->verticalHeader()->hide();/*隐藏垂直头*/
	ui.myTableView->horizontalHeader()->setClickable(false);/*横view点击不响应*/
	ui.myTableView->setStyleSheet("selection-background-color:lightgray;"); //设置选中背景色   选中变色
	ui.myTableView->horizontalHeader()->setStyleSheet("QHeaderView::section{background-color::lightgray;}"); //设置表头背景色
}


/*将delegate处理完的事件传回来*/
void MeetingListWdg::getFromButtonDelegateWithRowAndBool(int row,int isBool){   // 房间列表的点击事件

	qDebug()<<"MeetingListWdg --- row"<<row<<"and--isBool"<<isBool;
	if(g_pMeetingFrame!=NULL)
	{
		//进入房间1
		PROOM_INFO roomInfo = g_pMeetingFrame->GetRoomInfo(row);   
		if(roomInfo!=NULL)
		{
			if (isBool == 1)                               
			{
				qDebug()<<"roomInfo.strPassword == "<<roomInfo->strPassword; //  这个是看你选中了哪一行的房间。。
				MeetingRoomWordWdg::GetInstance()->indexRow = row;
				MeetingRoomWordWdg::GetInstance()->show();            //这里开始调用房间？
				//return;
			}
			else{
				g_pMeetingFrame->EnterRoom(roomInfo->ulRoomID);
				EventCenter::GetInstance()->setRoomId(roomInfo->ulRoomID);          //设置了一个成员变量？ m_room一个客户端一次只能进一个room
				this->hide();                                                       //隐藏当前这个类
				RoomWdg::GetInstance()->CenterWindow();             //设置Room在最中心
				RoomWdg::GetInstance()->showMaximized();            //
			}
		}
		
	}
 
}
void MeetingListWdg::getRoomIdToEnterRoom(uint32_t roomId){    //进入房间？？

	g_pMeetingFrame->EnterRoom(roomId);                        //  
	EventCenter::GetInstance()->setRoomId(roomId);             //  roomid 从哪里传进来的？？？
	this->hide();                                              //隐藏现在的列表控件
	RoomWdg::GetInstance()->CenterWindow();                    //进入房间。
	RoomWdg::GetInstance()->showMaximized();
}

void MeetingListWdg::mouseMoveEvent(QMouseEvent *event){

	if (mouse_pressed)
	{
		QPoint movePoint = event->globalPos();
		this->move(movePoint - mouse_movePoint);
	}
}

void MeetingListWdg::mousePressEvent(QMouseEvent *event){

	if (event->button() == Qt::LeftButton)
	{
		mouse_pressed = true;
		mouse_movePoint = event->pos();
	}
}

void MeetingListWdg::mouseReleaseEvent(QMouseEvent *event){

	mouse_pressed = false;

}



