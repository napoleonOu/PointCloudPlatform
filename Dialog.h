/*
 * =====================================================================================
 *
 *       Filename:  Dialog.h
 *
 *    Description:  dialogtest
 *
 *        Version:  1.0
 *        Created:  2016年11月19日 16时57分17秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<QDialog>
class TestDialog:public QDialog{
	Q_OBJECT
public:
	TestDialog(QWidget* parent=0):QDialog(parent){}
	~TestDialog(){}
};
