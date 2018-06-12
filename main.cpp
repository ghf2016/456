#include "eventcenter.h"                    //�¼�����  ��Ϣ���  signal and  slot
#include <QtGui/QApplication>                //   QT��
#include <QTextCodec>                      //  QT�����
#include <QFile>                               // QT���ļ�
#include "login/UserLoginWdg.h"                 // login ��mian ǰ��
#include "../stdafx.h"
#include <iostream>
#include <QMessageBox>
#include <QTranslator>
#include <Windows.h>
#include <process.h>
#include "CrashRpt.h" // Include CrashRpt header      ������

LPVOID lpvState = NULL; // Not used, deprecated

int main(int argc, char *argv[])
{
	CR_INSTALL_INFO info;                         // crash ��Ϣ
	memset(&info, 0, sizeof(CR_INSTALL_INFO));
	info.cb = sizeof(CR_INSTALL_INFO);
	info.pszAppName = L"open meeting2";
	info.pszAppVersion = L"16";
	info.pszUrl = L"http://www.onlycoder.net/meeting/index.php/Home/Index/uploadCrash";    //�����˷��͸� ������
	
	int nInstResult = crInstall(&info);             //���� crash ��
	
	if(nInstResult!=0)
	{
		TCHAR buff[256];
		crGetLastErrorMsg(buff, 256); // Get last error                 ���ر���
		//_tprintf(_T("%s\n"), buff); // and output it to the screen
		return FALSE;
	}
	crAddScreenshot2(CR_AS_MAIN_WINDOW|CR_AS_USE_JPEG_FORMAT, 95);          //����crash�Ķ�������ʱ����

	QApplication a(argc, argv);
	QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());            //QT������ �����ַ���ʽ
	QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());                 //������Ϊ�˽����������
	QTextCodec::setCodecForTr(QTextCodec::codecForLocale());


	QTranslator translator;                     
	translator.load(":/qt_zh_CN.qm");          //���뷭���ļ�
	a.installTranslator(&translator);           //������ڹ����н���ts�ļ�������qt�Դ�����linguist����ts�ļ���
												//����qm�ļ���ʵ�ֶ����Ե��л�
	
	
	QFile qssFile(":/qss/style");     //����ļ���resource���棬�ǽ�style.qss, ���������Ŀ¼����          
	QString qss;   
	qssFile.open(QFile::ReadOnly);           
	if(qssFile.isOpen())
	{                                       //��ȡ�������ļ���ȫ�ֵ�����
		qss = QString(qssFile.readAll()); //ת��qstring   ���Ǹ�ʽ�ļ�
		qApp->setStyleSheet(qss); //qApp��ͷ�ļ��ж�����
		qssFile.close();         //
	}

	if (argc == 1)
	{                      //����Ϊ1 ����login�� �����ˣ�
		UserLoginWdg::GetInstance()->initGodsAnyThingBySean(); //�����login��ʼ����
		EventCenter w;
		return a.exec();  
	}
	else                         //��֪����,���ϵͳ������ʱ�����ɳ�ʼ��ֵ�ģ������ֵ�������ȡ�Ļ�δֵ
	{                            //������������汾���ǳ�ʼֵ�ģ��������û�г�ʼֵ��
		EventCenter w;
		if(strlen(argv[1])<24)  
		{
			QMessageBox message(QMessageBox::NoIcon, "��ʾ","����̫��"); 
			return message.exec();
		}
		QString strUrl = QString(argv[1]+11);//��������ʱ��  �������  ��������ģ� �����ļ���
		QByteArray ba =  QByteArray::fromBase64(QByteArray(strUrl.toUtf8()));//base64���� ����
		QString qStr = QString::fromUtf8(ba);   //url������

		QString tipStr;
		QStringList list;
		list = qStr.split("&");  //�������� ���� ��&Ϊ�ָ��� ��������6����

		if (list.count() != 6)
		{
			tipStr = QString("���ݸ�ʽ����:%1").arg(argv[1]);
			QMessageBox message(QMessageBox::NoIcon, "��ʾ",tipStr); 
			return message.exec();
		}
		               //Ȼ����section���ָ��� ����������жϣ�
		 
		UserLoginWdg::GetInstance()->logType = qStr.section('&',1,1);//�������� �˺� ����ŵ�¼
		UserLoginWdg::GetInstance()->roomNum = qStr.section('&',2,2);//�����
		UserLoginWdg::GetInstance()->userId = qStr.section('&',3,3);//  �û�ID �� �û���
		UserLoginWdg::GetInstance()->passWord = qStr.section('&',4,4);// ����
		UserLoginWdg::GetInstance()->isWeb = true;
		UserLoginWdg::GetInstance()->initGodsAnyThingBySean();     //���ǳ�ʼ��
		a.exec();
		int nUninstRes = crUninstall();
		return nUninstRes;
	}
}
