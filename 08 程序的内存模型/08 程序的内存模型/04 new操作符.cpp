#include <iostream>
using namespace std;
int* fun() {
	//�ڶ�������һ����������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}
void test01() {
	int* p = fun();
	cout << *p << endl;
	//�����е����ݣ��ɳ���Ա����Ա���٣�����Ա�ͷ�
	//�����Ҫ�ͷŶ����е����ݣ����ùؼ���delete
	delete p;
	//cout << *p << endl;//�ڴ��Ѿ��ͷţ��ٴη��ʾ��ǷǷ��������ᱨ��
}
//�ڶ�������new��������
void test02() {
	//����10�������ݵ����飬�ڶ���
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������
	delete[] arr;
}
int main() {
	/*
		new��������
			1��new�Ļ����﷨��
				
			2���ڶ�������new�������飺
				
	*/
	//test01();
	test02();
	system("pause");
	return 0;
}