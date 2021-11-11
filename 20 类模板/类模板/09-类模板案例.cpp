#include <iostream>
using namespace std;
#include "MyArray.hpp"
/*
	��ģ�尸����
*		���Զ��������������Լ��Զ����������͵����ݽ��д洢
*		�������е����ݴ洢������
*		���캯���п��Դ������������
*		�ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
*		�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
*		����ͨ���±�ķ�ʽ���������е�Ԫ��
*		���Ի�ȡ�����е�ǰԪ�ظ��������������
*/
void printArray(MyArray<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void test09() {
	MyArray<int>arr1(5);
	/*MyArray<int>arr2(arr1);
	MyArray<int>arr3(100);
	arr3 = arr1;*/
	for (int i = 0; i < 5; i++)
	{
		arr1.PushBack(i);
	}

	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;

	printArray(arr1);

	cout << "����Ϊ��" << arr1.getCapacity() << endl;
	cout << "��СΪ��" << arr1.getSize() << endl;

	int size = arr1.getSize();
	for (int i = 0; i < size; i++)
	{
		arr1.PopBack();
	}
	cout << "ɾ����arr1�Ĵ�ӡ���Ϊ��" << endl;

	printArray(arr1);

	cout << "ɾ��������Ϊ��" << arr1.getCapacity() << endl;
	cout << "ɾ�����СΪ��" << arr1.getSize() << endl;
}

//�����Զ������������
class Person {
public:
	Person() {};
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	};
	string m_Name;
	int m_Age;

};
void printPersonArray(MyArray<Person>& arr) {
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i].m_Name << "  ";
	}
	cout << endl;
}
void test09_1() {
	MyArray<Person>p(10);

	Person p1("�����", 999);
	Person p2("ɳ����", 3999);
	Person p3("��˽�", 2999);
	Person p4("��Ħ", 99);
	Person p5("���", 199);

	//�����ݲ��뵽������
	p.PushBack(p1);
	p.PushBack(p2);
	p.PushBack(p3);
	p.PushBack(p4);
	p.PushBack(p5);

	//��ӡ����
	printPersonArray(p);

	cout << "����Ϊ��" << p.getCapacity() << endl;
	cout << "��СΪ��" << p.getSize() << endl;

	p.PopBack();

	//��ӡ����
	printPersonArray(p);
}
int main() {
	test09_1();
	system("pause");
	return 0;
}