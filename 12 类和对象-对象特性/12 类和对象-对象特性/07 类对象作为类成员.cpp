#include <iostream>
using namespace std;

/*
	类对象作为类成员：
		在其他类对象作为本类成员，构造时候先构造类对象，再构造自身;析构的顺序与构造相反
*/
class Phone {
public:
	Phone(string pName) {
		m_PName = pName;
		cout << "Phone 的构造函数调用" << endl;
	}
	~Phone() {
		cout << "Phone的构造函数调用" << endl;
	}
	string m_PName;

};
class Person7 {
public:
	Person7(string name, string pName) :m_Name(name), m_Phone(pName) {
		cout << "Person的构造函数调用" << endl;
	}
	~Person7() {
		cout << "Person的构造函数调用" << endl;
	}
	string m_Name;
	Phone m_Phone;

};
void test07() {
	Person7 p("何捷", "华为 ");
	cout << "姓名：" << p.m_Name << "\t手机型号：" << p.m_Phone.m_PName << endl;
} 
int main7() {
	test07();
	system("pause");
	return 0;
}