#include "ButtonDelegate.h"
#include <QPainter>
#include <QDebug>
#include <QMouseEvent>
#include <QTableView>
#include "../stdafx.h"

ButtonDelegate::ButtonDelegate(QObject *parent)
	: QStyledItemDelegate(parent)
{

}

ButtonDelegate::~ButtonDelegate()               //这个类的初始化 定义 在 listwdg里面
{

}

void ButtonDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index)const
{

__super::paint(painter, option, index);           //这个函数用来做什么？  给每个房间 的 按钮画图？ 设置好每个房间的信息 图片
	if(!index.isValid() || NULL == painter)
	{
		return;
	}
	QVariant loVar = index.data(Qt::UserRole);
	QString strUserName = loVar.toString();
	//得到当前Item数据
	/*
	if (!loVar.canConvert<STRU_TTXGUI_UL_USER>())
	{
		return;
	}
	*/
	painter->save();
	QRect rcItem = option.rect;
	
	//QRect rcItem = option.rect;
	qDebug()<<"option.rect=== "<<option.rect;
	QPen pen;
	pen.setColor(QColor(102,102,102)); //#fe0002
	painter->setPen(pen);
	painter->drawImage(QPoint(rcItem.left()+18,rcItem.top()+20),QImage(tr(":/login/login/list_jr.png")),  //那个进入的图片
		QRect(0,0,50,20));
	//qDebug()<<"column four"<<strUserName;
	//painter->drawText(rcItem.left()+28,rcItem.top()+10,100,35,Qt::TextWrapAnywhere,strUserName);

	painter->restore();

	//int gridHint = tableView->style()->styleHint(QStyle::SH_Table_GridLineColor, new QStyleOptionViewItemV4());
	//QColor gridColor = static_cast<QRgb>(gridHint);
	//pen = QPen(gridColor, 0, tableView->gridStyle());

	//QStyleOptionViewItem itemOption(option);
	//if(itemOption.state & QStyle::State_HasFocus)
	//	itemOption.state = itemOption.state ^ QStyle::State_HasFocus;
	//QStyledItemDelegate::paint(painter,itemOption,index);
	//QPen oldPen = painter->pen();
	//painter->setPen(pen);
	//painter->setPen(oldPen);

	
}
bool ButtonDelegate::eventFilter(QObject *object, QEvent *event){   //事件过滤器？

	switch (event->type()){
	case QEvent::MouseButtonPress:
			goinBtnPressed(object, event);    //只在乎 鼠标按下的事件，函数就在下面
			break;
	}
	return __super::eventFilter(object, event);
}
//鼠标点击事件
void ButtonDelegate::goinBtnPressed(QObject *object, QEvent *event){

		QTableView* pView    =   qobject_cast<QTableView*>(object->parent()); //强制转换
		QMouseEvent* pEvent =   static_cast<QMouseEvent*>(event);
		QModelIndex loModelIndex = pView->indexAt(pEvent->pos());     

		/*获取model中的数据*/
		int column = loModelIndex.column();
		int row = loModelIndex.row();
		if (row < 0)
		{
			return;
		}
		//int row = loModelIndex.row();
		QVariant varint = loModelIndex.data(Qt::DisplayRole);
		QString str = varint.toString();

		/*获取鼠标点击坐标*/
		/*	int x = pEvent->x();
		int y = pEvent->y();
		int x1 = pEvent->globalX();
		int y2 = pEvent->globalY();
		QPoint  p1 = pEvent->pos();
		QPoint p2 = pEvent->globalPos();
		*/
		//定义在imeetingframe上的类
		PROOM_INFO roomInfo = g_pMeetingFrame->GetRoomInfo(row); //通信事件 还是在g_pMeetingFrame上面，可以说
		if(roomInfo==NULL)                                         //所以房间的信息应该也是从这个上面得到的吧？
			return;
		QString pStr = QString(roomInfo->strPassword);
		int pBool = 0;
		if (pStr.length()>0)
		{
			pBool = 1;
		}else
			pBool = 0;

		QPoint  p1 = pEvent->pos();
		if (p1.x()>350&&p1.x()<405)
		{                                                     //这个类的最终目的就是为了 触发这个信号
			emit sendTableViewNumberRowAndWorth(row,pBool);  //发送这个 点击信号事件！！！！
		}else
			return;

}

