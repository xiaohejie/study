#include <iostream>
using namespace std;
/*
	访问权限：
		公共权限 public：成员可以在类内被访问也可以在类外进行访问
		保护权限 protected：成员可以在类内被访问不可以在类外进行访问	继承中，子类可以访问父类中的保护权限
		私有权限 private：成员可以在类内被访问不可以在类外进行访问		继承中，子类不可以访问父类中的保护权限
*/
class Person {
public:
	//公共权限
	string m_Name;

protected:
	//保护权限
	string m_Car;

private:
	//私有权限
	int m_Password;

public:
	void func() {
		m_Name = "张三";
		m_Car = "宝马";
		m_Password = 163543;
		cout << m_Name << m_Car << endl;
	}
	void setName(string name) {
		m_Name = name;
	}

};
int main2() {
	//实例化具体对象
	Person p1;
	p1.m_Name = "李四";
	cout << p1.m_Name << endl;
	p1.func();
	p1.setName("何捷");
	cout << p1.m_Name << endl;
	//cout << p1.m_Name << p1.m_Car << endl;
	//保护权限和私有权限的内容在类外不可以访问

	system("pause");
	return 0;
}