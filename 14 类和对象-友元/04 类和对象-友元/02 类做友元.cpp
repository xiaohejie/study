//#include <iostream>
//using namespace std;
///*
//	������Ԫ��	
//*/
////class Building;
//class Building {
//	friend class goodGay;//��Ԫ��
//
//public:
//	Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
////����д��Ա����
//Building::Building() {
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//
//class goodGay {
//public:
//	goodGay();
//public:
//	Building* building;
//	void visit(); //{
//	////�ιۺ���������Building�е�����
//	//}
//};
//goodGay::goodGay() {
//	//��������
//	building = new Building; 
//}
//void goodGay::visit() {
//	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//
//void test02() {
//	goodGay gg;
//	gg.visit();
//}
//int main2() {
//	test02();
//	system("pause");
//	return 0;
//}