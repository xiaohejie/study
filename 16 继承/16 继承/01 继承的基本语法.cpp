#include <iostream>
using namespace std;
/*
	继承：class 子类 : 继承方式 父类{}
	好处：减少重复代码
*/
//继承实现页面
class BasePage {
public:
	void header() {
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer() {
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left() {
		cout << "Java、Python、C++...（公共分类列表）" << endl;
	}

};

//java页面
class Java : public BasePage{
public:
	
	void content(){
		cout << "Java学科视频" << endl;
	}
};

//Python页面
class Python : public BasePage {
public:
	
	void content() {
		cout << "Python学科视频" << endl;
	}
};

//C++页面
class Cpulspuls : public BasePage {
public:
	
	void content() {
		cout << "Cpulspuls学科视频" << endl;
	}
};
void test01() {
	cout << "Java学习视频网站" << endl;
	Java java;
	java.header();
	java.left();
	java.content();
	java.footer();

	cout << "*****************************" << endl;

	cout << "Python学习视频网站" << endl;
	Python python;
	python.header();
	python.left();
	python.content();
	python.footer();
}
int main1() {
	test01();
	system("pause");
	return 0;
}