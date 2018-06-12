#include "MeetingDetailDelegate.h"
#include <QDateTime>


MeetingDetailDelegate::MeetingDetailDelegate(QObject *parent)
	: QStyledItemDelegate(parent)
{

}

MeetingDetailDelegate::~MeetingDetailDelegate()
{

}

//这个有什么用？ ！！！！！！这个detailDelegate 相当于把 这个 接收内部输入值，动态显示数据
void MeetingDetailDelegate::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index)const{
	                                                          //风格设置

	__super::paint(painter, option, index);
	if(!index.isValid() || NULL == painter)
	{
		return;
	}
	
	PROOM_INFO roomInfo = g_pMeetingFrame->GetRoomInfo(index.row());   //难道是在这里面完成的数据  标题的赋值


	painter->save();//我们可以先利用save()函数来保存坐标系现在的状态，
	QRect rcItem = option.rect;  //该类在一个平面定义一个矩形
	QPen pen;
	pen.setColor(QColor(0,0,0)); //#fe0002
	QFont senderFont("微软雅黑",10);
	painter->setFont(senderFont);
	painter->setPen(pen);
	//qDebug()<<"column four"<<strUserName;

	painter->drawText(rcItem.left()+10,rcItem.top()+5,rcItem.right()-rcItem.left()-20,20,Qt::AlignLeft,"会议名称11："+QString::fromUtf8(roomInfo->strRoomName));
	// 就是你了！！！！！！   在设计好的地方显示数据                真实显示

	pen.setColor(QColor(190,190,190)); //#fe0002
	QFont sFont("微软雅黑",8);
	painter->setFont(sFont);
	painter->setPen(pen);

	QDateTime sTime = QDateTime::fromTime_t(roomInfo->startTime);
	QDateTime eTime = QDateTime::fromTime_t(roomInfo->endTime);

	painter->drawText(rcItem.left()+10,rcItem.top()+25,rcItem.right()-rcItem.left()-20,15,Qt::AlignLeft,"开始时间："+sTime.toString("yyyy-MM-dd hh:mm:ss"));
	painter->drawText(rcItem.left()+10,rcItem.top()+40,rcItem.right()-rcItem.left()-20,15,Qt::AlignLeft,"结束时间："+eTime.toString("yyyy-MM-dd hh:mm:ss"));
	painter->restore();                                                 //真实显示
}