#include <iostream>
using namespace std;
/*
	��Ԫ��friend����
		Ŀ�ģ���һ�����������������һ������˽�г�Ա
		����ʵ�֣�1��ȫ�ֺ�������Ԫ��2��������Ԫ��3����Ա��������Ԫ
*/
class Building1 {
	//�ú������Է���Building��˽�г�Ա
	friend void goodGay1(Building1& building);
public:
	Building1() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
	string m_SittingRoom;

private:
	string m_BedRoom;
};
void goodGay1(Building1 &building) {
	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << building.m_SittingRoom << endl;
	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << building.m_BedRoom << endl;
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