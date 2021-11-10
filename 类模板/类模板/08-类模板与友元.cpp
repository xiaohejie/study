#include <iostream>
using namespace std;
/*
	类模板与友元：
		全局函数类内实现：直接在类内声明友元即可
		全局函数类外实现：需要提前让编译器指导全局函数的存在
*/
template<class T1, class T2>
class Person;
//类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2> p) {
	cout << "姓名：" << p.m_Name << "   ";
	cout << "年龄：" << p.m_Age << endl;
}
template<class T1, class T2>

class Person {
	//全局函数做类内实现
	friend void printPerson(Person<T1, T2> p) {
		cout << "类外：姓名：" << p->m_Name << "   ";
		cout << "年龄：" << p->m_Age << endl;
	}
	//全局函数类外实现
	//加空模板的参数列表
	//如果是全局函数是类外实现，需要让编译器提前知道这个函数的存在
	friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};
//通过全局函数打印person的信息
void test08() {
	Person<string, int>p("张三", 23);
	//printPerson(p);
	printPerson2(p);
}
int main() {
	test08();
	system("pause");
	return 0;
}