#include <iostream>
using namespace std;
#include <fstream>
/*
	�����ƶ��ļ���
*/
class Person {
public:
	char m_Name[64];
	int m_Age;
}; 
void test04() {
	//1������ͷ�ļ�

	//2������������
	ifstream ifs;

	//3�����ļ�
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}

	//4�����ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.m_Name << "  ���䣺" << p.m_Age << endl;

	//5���ر��ļ�
	ifs.close();

}
int main() {
	test04();
	system("pause");
	return 0;
}