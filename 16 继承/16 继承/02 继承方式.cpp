#include <iostream>
using namespace std;
/*
	继承方式：
		1、公共继承
		2、保护继承
		3、私有继承
*/
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 : public Base1 {
public:
	void func() {
		m_A = 10;//父类中的公共权限成员 到子类中依然是公共权限
		m_B = 10;//父类中的保护权限成员 到子类中依然是保护权限
		//m_C = 10;//父类中的私有权限成员 到子类中访问不到
	}

};
void test02() {
	Son1 s;
	s.m_A = 10;
	//s.m_B = 10;//保护权限类外不能访问
}
class Son2 : protected Base1 {
	//friend void test02_1();
public:
	void func() {
		m_A = 10;//父类中的公共权限成员 到子类中依然是保护权限
		m_B = 10;//父类中的保护权限成员 到子类中依然是保护权限
		//m_C = 10;//父类中的私有权限成员 到子类中访问不到
	}

};
void test02_1() {
	Son2 s;
	//s.m_A = 100;//m_A变为了保护权限，因此类外不可以访问
}
int main2() {
	system("pause");
	return 0;
}