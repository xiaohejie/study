#include <iostream>
using namespace std;
/*
	���캯���ķ����Լ����ã�
	���ַ��෽ʽ��
		��������Ϊ���вι�����޲ι���
		�����ͷ�Ϊ����ͨ����Ϳ�������
	���ֵ��÷�ʽ��
		���ŷ�;
		��ʾ����
		��ʽת������

*/
class Person {
public:
	Person() {
		cout << "Person���޲ι��캯������" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person& p) {
		//������������ϵ��������Կ�����������
		cout << "Person�Ŀ��������ĵ���" << endl;
		age = p.age;
	}
	~Person() {
		cout << "Person�����������ĵ���" <<endl;
	}

private:
	int age;

};
//void test2() {
//	//1�����ŷ�
//	Person p1;//Ĭ�Ϲ��캯������
//	Person p2(10);//������вι��캯��
//	Person p3(p2);//���ÿ������캯��
//
//	//ע�����
//		//����Ĭ�Ϲ��캯��ʱ����Ҫ��()��
//		//��Ϊ�������д��룬����������Ϊ��һ��������������������Ϊ�ڴ�������
//	Person p1();
//	//2����ʾ��
//	Person p1;
//	Person p2 = Person(10);//�вι���
//	Person p3 = Person(p2);//��������
//
//	//Person(10);//��������	�ص㣺��ǰ��ִ�н���ʱ��ϵͳ������������������
//	//ע������2����Ҫ���ÿ������캯������ʼ���������󣬱���������ΪPerson(p3) === Person p3;����Ϊ�Ƕ��������
//	//Person(p3);
//
//	//3����ʽת����
//	Person p4 = 10;		//�൱��д��Person p4 = Person(10)
//	Person p5 = p4;		//�вι���
//}	
int main2() {
	//test2();
	system("pause");
	return 0;
}