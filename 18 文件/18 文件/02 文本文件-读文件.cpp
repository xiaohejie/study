#include <iostream>
using namespace std;
#include <fstream>
#include <string>
/*
	�ı��ļ�-���ļ�
*/
void test02() {
	//1������ͷ�ļ�

	//2������������
	ifstream ifs; 
	//3�����ļ����ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt" , ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}
	//4��������
		//��һ��
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

		//�ڶ���
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

		//������
	string buf;
	while (getline(ifs , buf))
	{
		cout << buf << endl;
	}

		//������
	char c;
	while (ifs.get(c))
	{
		cout << c;
	}

	//5���ر��ļ�
	ifs.close();
}
int main2(){
	test02();
	system("pause");
	return 0;
}