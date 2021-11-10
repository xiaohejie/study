#include <iostream>
using namespace std;
/*
	类模板中成员函数创建时机：
		类模板中成员函数在调用时才去创建
*/
class Person1 {
public:
	void showInfo1() {
		cout << "Person1 show" << endl;
	}

};
class Person2 {
public:
	void showInfo2() {
		cout << "Person2 show" << endl;
	}

};

template<class T>
class MyClass {
public:
	T obj;
	//类模板的成员函数
	void func1() {
		obj.showInfo1();
	}
	void func2() {
		obj.showInfo2();
	}

};

void test03() {
	MyClass<Person1>p;
	p.func1();
	//p.func2();
}
int main3() {
	test03();
	system("pause");
	return 0;
}