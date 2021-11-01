#include <iostream>
using namespace std;
/*
	C++编译器至少给一个类添加4个函数：
		1、默认构造函数（无参，函数体为空）
		2、默认析构函数（无参，函数体为空）
		3、默认拷贝构造函数，对属性进行值拷贝
		4、赋值运算符operator=，对属性进行值拷贝

		如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝的问题
		(堆区内存重复释放，程序奔溃！利用深拷贝解决浅拷贝问题)
*/
class Person05 {
public:
	Person05(int age) {
		m_Age = new int(age);//将数据创建在堆区，new int返回的是int*
	}
	~Person05() {
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL; 
		}
	}
	//重载赋值运算符
	Person05& operator=(Person05 &p) {
		//编译器是浅拷贝
		//m_Age = p.m_Age;
		
		//应该先判断是否有属性在堆区，如果有先释放干净，然后再进行深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//深拷贝
		m_Age = new int(*p.m_Age);

		//返回对象本身
		return *this;
	}
	int* m_Age;

};
void test05() {
	Person05 p(23);
	Person05 p1(24);
	Person05 p2(25);
	p1 = p = p2;
	cout << "p的年龄为：" << *p.m_Age << endl;
	cout << "p1的年龄为：" << *p1.m_Age << endl;
	cout << "p2的年龄为：" << *p2.m_Age << endl;
}
int main5() {
	test05();
	system("pause");
	return 0;
}