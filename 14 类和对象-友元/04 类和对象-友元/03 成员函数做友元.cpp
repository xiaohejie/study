#include <iostream>
using namespace std;
class Building;
class goodGay03 {
public:
	goodGay03();
public:
	void visit();	//��visit�������Է���Building��˽�г�Ա
	void visit2();	//��visit2���ʲ�����
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

//����ʵ�ֳ�Ա����
Building::Building() {
	m_SittingRoom = "����";
	m_BadRoom = "����";
}
goodGay03::goodGay03() {
	building = new Building;
} 
void goodGay03::visit() {
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit�������ڷ��ʣ�" << building->m_BadRoom << endl;
}
void goodGay03::visit2() {
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
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