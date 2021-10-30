#include <iostream>
using namespace std;
class Building;
class goodGay03 {
public:
	goodGay03();
public:
	void visit();	//让visit函数可以访问Building中私有成员
	void visit2();	//让visit2访问不到；
	Building* building;
};
class Building {
	friend void goodGay03::visit();
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BadRoom;
};

//类外实现成员函数
Building::Building() {
	m_SittingRoom = "客厅";
	m_BadRoom = "卧室";
}
goodGay03::goodGay03() {
	building = new Building;
} 
void goodGay03::visit() {
	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
	cout << "visit函数正在访问：" << building->m_BadRoom << endl;
}
void goodGay03::visit2() {
	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
}

void test03() {
	goodGay03 gg;
	gg.visit();
	cout << "***************" << endl;
	gg.visit2();
}
int main() {
	test03();
	system("pause");
	return 0;
}