#include <iostream>
using namespace std;
/*
	菱形继承：
		-两个派生类继承同一个基类，又有某个类同时继承两个派生类，这种继承称为菱形继承

	菱形继承问题：
		1、羊继承了动物的数据，驼同样继承了动物的数据，当羊驼使用数据时，就会产生二义性。
		2、羊驼继承子动物的数据继承了两份，但是这种数据我们只需要一个，会导致资源浪费。

	利用虚继承可以解决菱形继承的问题:
		继承之前加上关键字virtual变为虚继承
		Animal类称为虚基类
*/
//动物类
class Animals {
public:
	int m_Age;
};

//羊类
class Sheep :virtual public Animals {};

//驼类
class Tuo :virtual public Animals{};

//羊驼类
class SheepTuo :public Sheep , public Tuo{};

void Test08() {
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	cout << st.Sheep::m_Age << endl;
	cout << st.Tuo::m_Age << endl;
	cout << st.m_Age << endl;

}

int main() {
	Test08();
	system("pause");
	return 0;
}