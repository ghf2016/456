#include "Meetinglistmodel.h"
#include "../stdafx.h"
#include "Meetinglistwdg.h"

MeetingListModel * MeetingListModel::m_instance = NULL;;

MeetingListModel * MeetingListModel::GetInstance()    //模型？？
{
	if(m_instance == NULL)
	{
		m_instance = new MeetingListModel();
	}
	return m_instance;
}

MeetingListModel::MeetingListModel(QObject *parent)     //初始化？  这个仅在 listwdg 的 初始化里面调用过一次
	: QAbstractTableModel(parent)
{
	m_total = 0;
	headerList<<"房间编号"<<"会议名称"<<"在线/总共"<<"密码"<<"";
    
}
MeetingListModel::~MeetingListModel()
{
}
int MeetingListModel::columnCount(const QModelIndex &parent /* = QModelIndex */)const{

	return headerList.count();      // //都是必须重写的！！！！
}
int MeetingListModel::rowCount(const QModelIndex &parent /* = QModelIndex */)const{
	return m_total;                //都是必须重写的！！！！
}

QVariant MeetingListModel::data(const QModelIndex &index, int role )const
{
	if (!index.isValid())
		return QVariant();

	/*文字居中显示*/
	if( Qt::TextAlignmentRole == role )  
		return Qt::AlignCenter;     
	if(index.row()<0)
		return QVariant();

	PROOM_INFO roomInfo = g_pMeetingFrame->GetRoomInfo(index.row());   //我没错的话  model就是从这个地方获取的数据
	if(roomInfo == NULL)                                              //在某处被循环调用？？
		return NULL;
	
	if(role == Qt::DisplayRole)
	{
		switch(index.column()){
		case 0:
			return roomInfo->ulRoomID;        //返回房间ID         那个 Qvarint 是万用的变量?
			break;
		case 1:
			return "";/*QString::fromUtf8(roomInfo->strRoomName)*/;     //房间名字？？ 在delegate里有显示
			break;
		case 2:
			 return QString("%1/%2").arg(roomInfo->onlineUser).arg(roomInfo->maxUser);  //返回房间在线/最大用户？
			break;
		case 3:
			{
				QString pStr = QString(roomInfo->strPassword); //房间密码
			  if (pStr.length() > 0)
			  {
				  return "是222";
			  }
			  else
				  return "否333";             //真实显示
			}
			break;
		case 4:
			return "";
			break;
		default:
			return QVariant();

		}
	}
	return QVariant();
}
QVariant MeetingListModel::headerData(int section, Qt::Orientation orientation, int role )const  //这个是用来弄标题的
{
	if(role == Qt::DisplayRole && orientation == Qt::Horizontal)         //表格的行列的标题
		return headerList[section];    //横向标题                         目前没有纵向标题

	return QAbstractTableModel::headerData(section,orientation,role);  //固定用法

}
                                                            //这个是加入到model里面？？

bool MeetingListModel::insertRows(int row, int count, const QModelIndex & parent)
{                                                        //这个来自 eventcenter的 信号函数，调用了UserLgoinWdg里面，再调这个， 信号来自MeetingConnlmpl的解析完json数据，保存到链表中了
	beginInsertRows(parent, row, row + count-1);         //数据来自于？ QModelIndex？？
	m_total += count;//这个是QT函数了
	endInsertRows();                                  //这个 parent不是由外面传入的，
	return true;                                                                         //在外面收到 数据之后 会调用这个函数
}

bool MeetingListModel::removeRows(int row, int count, const QModelIndex & parent)
{
	beginRemoveRows(parent, row, row + count-1);
	m_total -= count;
	endRemoveRows();
	return true;
}
