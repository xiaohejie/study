#include <iostream>
using namespace std;
/*
	��ģ����̳У�
		-������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ��������T������
		-�����ָ�����������޷�����������ڴ�
		-��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
*/
template<class T>
class Base {
public:
	T m;
};
/*class Son :public Base*/ //����ģ�����Ҫ֪�������е�T���ͣ����ܼ̳и�����
class Son :public Base<int>
{
public:

};
void test05() {
	Son s1;
}

//��������ָ�������е�T���ͣ�����Ҳ��Ҫ�����ģ��
template<class T1, class T2>
class Son2 :public Base<T1>
{
public:
	Son2() {
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;;
	}
	T2 obj;
};
void test05_1() {
	Son2<int, char> s2;
}
int main5() {
	test05_1();
	system("pause");
	return 0;
}