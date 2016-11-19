/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  qpointcloudplatform
 *
 *        Version:  1.0
 *        Created:  2016年11月19日 16时52分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include"Dialog.h"
#include<QApplication>
int main(int argc,char** argv){
	QApplication app(argc,argv);
	TestDialog w;
	w.show();
	return app.exec();
}



