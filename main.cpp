#include "eventcenter.h"                    //事件集，  消息与槽  signal and  slot
#include <QtGui/QApplication>                //   QT库
#include <QTextCodec>                      //  QT编码库
#include <QFile>                               // QT读文件
#include "login/UserLoginWdg.h"                 // login 在mian 前面
#include "../stdafx.h"
#include <iostream>
#include <QMessageBox>
#include <QTranslator>
#include <Windows.h>
#include <process.h>
#include "CrashRpt.h" // Include CrashRpt header      报错类

LPVOID lpvState = NULL; // Not used, deprecated

int main(int argc, char *argv[])
{
	CR_INSTALL_INFO info;                         // crash 信息
	memset(&info, 0, sizeof(CR_INSTALL_INFO));
	info.cb = sizeof(CR_INSTALL_INFO);
	info.pszAppName = L"open meeting2";
	info.pszAppVersion = L"16";
	info.pszUrl = L"http://www.onlycoder.net/meeting/index.php/Home/Index/uploadCrash";    //报错了发送给 服务器
	
	int nInstResult = crInstall(&info);             //启动 crash 库
	
	if(nInstResult!=0)
	{
		TCHAR buff[256];
		crGetLastErrorMsg(buff, 256); // Get last error                 返回报错
		//_tprintf(_T("%s\n"), buff); // and output it to the screen
		return FALSE;
	}
	crAddScreenshot2(CR_AS_MAIN_WINDOW|CR_AS_USE_JPEG_FORMAT, 95);          //还是crash的东西，暂时不看

	QApplication a(argc, argv);
	QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());            //QT启动， 设置字符格式
	QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());                 //好像是为了解决中文问题
	QTextCodec::setCodecForTr(QTextCodec::codecForLocale());


	QTranslator translator;                     
	translator.load(":/qt_zh_CN.qm");          //载入翻译文件
	a.installTranslator(&translator);           //这个先在工程中建立ts文件，再用qt自带工具linguist翻译ts文件，
												//生成qm文件，实现多语言的切换
	
	
	QFile qssFile(":/qss/style");     //这个文件在resource下面，是叫style.qss, 不是在这个目录下面          
	QString qss;   
	qssFile.open(QFile::ReadOnly);           
	if(qssFile.isOpen())
	{                                       //读取到配置文件，全局的配置
		qss = QString(qssFile.readAll()); //转成qstring   都是格式文件
		qApp->setStyleSheet(qss); //qApp在头文件中定义了
		qssFile.close();         //
	}

	if (argc == 1)
	{                      //参数为1 进入login？ 结束了？
		UserLoginWdg::GetInstance()->initGodsAnyThingBySean(); //这个是login初始化？
		EventCenter w;
		return a.exec();  
	}
	else                         //我知道了,这个系统启动的时候是由初始的值的，但这个值从哪里获取的还未值
	{                            //后面这个启动版本就是初始值的，上面就是没有初始值的
		EventCenter w;
		if(strlen(argv[1])<24)  
		{
			QMessageBox message(QMessageBox::NoIcon, "提示","参数太短"); 
			return message.exec();
		}
		QString strUrl = QString(argv[1]+11);//在启动的时候  输入参数  从哪里读的？ 配置文件？
		QByteArray ba =  QByteArray::fromBase64(QByteArray(strUrl.toUtf8()));//base64解码 解密
		QString qStr = QString::fromUtf8(ba);   //url？？？

		QString tipStr;
		QStringList list;
		list = qStr.split("&");  //这个输入的 参数 以&为分隔符 ，而且有6个？

		if (list.count() != 6)
		{
			tipStr = QString("数据格式有误:%1").arg(argv[1]);
			QMessageBox message(QMessageBox::NoIcon, "提示",tipStr); 
			return message.exec();
		}
		               //然后还用section还分隔？ 上面仅仅做判断？
		 
		UserLoginWdg::GetInstance()->logType = qStr.section('&',1,1);//类型区分 账号 会议号登录
		UserLoginWdg::GetInstance()->roomNum = qStr.section('&',2,2);//房间号
		UserLoginWdg::GetInstance()->userId = qStr.section('&',3,3);//  用户ID 或 用户名
		UserLoginWdg::GetInstance()->passWord = qStr.section('&',4,4);// 密码
		UserLoginWdg::GetInstance()->isWeb = true;
		UserLoginWdg::GetInstance()->initGodsAnyThingBySean();     //还是初始化
		a.exec();
		int nUninstRes = crUninstall();
		return nUninstRes;
	}
}
