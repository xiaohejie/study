#include <iostream>
using namespace std;
/*
	友元（friend）：
		目的：让一个函数或者类访问另一个类中私有成员
		三种实现：1、全局函数做友元；2、类做友元；3、成员函数做友元
*/
class Building1 {
	//该函数可以访问Building中私有成员
	friend void goodGay1(Building1& building);
public:
	Building1() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
	string m_SittingRoom;

private:
	string m_BedRoom;
};
void goodGay1(Building1 &building) {
	cout << "好基友全局函数正在访问：" << building.m_SittingRoom << endl;
	cout << "好基友全局函数正在访问：" << building.m_BedRoom << endl;
}
void test01(){
	Building1 building;
	goodGay1(building);
}
int main1() {
	test01();
	system("pause");
	return 0;
}