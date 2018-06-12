#include "Meetinglistmodel.h"
#include "../stdafx.h"
#include "Meetinglistwdg.h"

MeetingListModel * MeetingListModel::m_instance = NULL;;

MeetingListModel * MeetingListModel::GetInstance()    //ģ�ͣ���
{
	if(m_instance == NULL)
	{
		m_instance = new MeetingListModel();
	}
	return m_instance;
}

MeetingListModel::MeetingListModel(QObject *parent)     //��ʼ����  ������� listwdg �� ��ʼ��������ù�һ��
	: QAbstractTableModel(parent)
{
	m_total = 0;
	headerList<<"������"<<"��������"<<"����/�ܹ�"<<"����"<<"";
    
}
MeetingListModel::~MeetingListModel()
{
}
int MeetingListModel::columnCount(const QModelIndex &parent /* = QModelIndex */)const{

	return headerList.count();      // //���Ǳ�����д�ģ�������
}
int MeetingListModel::rowCount(const QModelIndex &parent /* = QModelIndex */)const{
	return m_total;                //���Ǳ�����д�ģ�������
}

QVariant MeetingListModel::data(const QModelIndex &index, int role )const
{
	if (!index.isValid())
		return QVariant();

	/*���־�����ʾ*/
	if( Qt::TextAlignmentRole == role )  
		return Qt::AlignCenter;     
	if(index.row()<0)
		return QVariant();

	PROOM_INFO roomInfo = g_pMeetingFrame->GetRoomInfo(index.row());   //��û��Ļ�  model���Ǵ�����ط���ȡ������
	if(roomInfo == NULL)                                              //��ĳ����ѭ�����ã���
		return NULL;
	
	if(role == Qt::DisplayRole)
	{
		switch(index.column()){
		case 0:
			return roomInfo->ulRoomID;        //���ط���ID         �Ǹ� Qvarint �����õı���?
			break;
		case 1:
			return "";/*QString::fromUtf8(roomInfo->strRoomName)*/;     //�������֣��� ��delegate������ʾ
			break;
		case 2:
			 return QString("%1/%2").arg(roomInfo->onlineUser).arg(roomInfo->maxUser);  //���ط�������/����û���
			break;
		case 3:
			{
				QString pStr = QString(roomInfo->strPassword); //��������
			  if (pStr.length() > 0)
			  {
				  return "��222";
			  }
			  else
				  return "��333";             //��ʵ��ʾ
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
QVariant MeetingListModel::headerData(int section, Qt::Orientation orientation, int role )const  //���������Ū�����
{
	if(role == Qt::DisplayRole && orientation == Qt::Horizontal)         //�������еı���
		return headerList[section];    //�������                         Ŀǰû���������

	return QAbstractTableModel::headerData(section,orientation,role);  //�̶��÷�

}
                                                            //����Ǽ��뵽model���棿��

bool MeetingListModel::insertRows(int row, int count, const QModelIndex & parent)
{                                                        //������� eventcenter�� �źź�����������UserLgoinWdg���棬�ٵ������ �ź�����MeetingConnlmpl�Ľ�����json���ݣ����浽��������
	beginInsertRows(parent, row, row + count-1);         //���������ڣ� QModelIndex����
	m_total += count;//�����QT������
	endInsertRows();                                  //��� parent���������洫��ģ�
	return true;                                                                         //�������յ� ����֮�� ������������
}

bool MeetingListModel::removeRows(int row, int count, const QModelIndex & parent)
{
	beginRemoveRows(parent, row, row + count-1);
	m_total -= count;
	endRemoveRows();
	return true;
}
