//#include <iostream>
//using namespace std;
///*
//	类做友元：	
//*/
////class Building;
//class Building {
//	friend class goodGay;//友元类
//
//public:
//	Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
////类外写成员函数
//Building::Building() {
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//
//class goodGay {
//public:
//	goodGay();
//public:
//	Building* building;
//	void visit(); //{
//	////参观函数，访问Building中的属性
//	//}
//};
//goodGay::goodGay() {
//	//创建对象
//	building = new Building; 
//}
//void goodGay::visit() {
//	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;
//	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
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