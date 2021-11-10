#include <iostream>
using namespace std;
/*
	类模板做函数参数(一共有三种传递方式)：
		1、指定传入的类型：直接显示对象的数据类型
		2、参数模板化：将对象中的参数变为模板进行传递
		3、整个类模板化：将这个对象类型模板化进行传递
*/
template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson() {
			cout << "姓名：" << this->m_Name << "  ";
			cout << "年龄：" << this->m_Age << endl;
	}
	T1 m_Name;
	T2 m_Age;
};

//1、指定传入的类型：直接显示对象的数据类型
void printPerson1(Person<string, int>&p) {
	p.showPerson();
}
void test04() {
	Person<string, int>p("孙悟空", 999);
	printPerson1(p);
}

//2、参数模板化：将对象中的参数变为模板进行传递
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p) {
	p.showPerson(); 
	//打印T1和T2的名称
	cout << "T1的名称：" << typeid(T1).name() << endl;
	cout << "T2的名称：" << typeid(T2).name() << endl;
}
void test04_1() {
	Person<string, int>p("猪八戒", 99);
	printPerson2(p);
}

//3、整个类模板化：将这个对象类型模板化进行传递
template<class T>
void printPerson3(T& p) {
	p.showPerson();
}
void test04_2() {
	Person<string, int>p("唐僧", 90);
	printPerson3(p);
}
int main4() {
	test04();
	test04_1();
	test04_2();
	system("pause");
	return 0;
}