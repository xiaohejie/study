#include <iostream>
using namespace std;
/*
	深拷贝与浅拷贝：
		浅拷贝：简单的复制拷贝操作
		浅拷贝带来的问题：堆区的内存重复释放，要利用深拷贝进行解决
		深拷贝：在堆区重新申请空间，进行拷贝操作

	总结：如果属性有在堆区中开辟的，一定要自己提供拷贝构造函数，放置浅拷贝带来的问题。
*/
class Person5 {
public:
	Person5() {
		cout << "Person5的默认构造函数调用" << endl;
	}
	Person5(int age , int height) {
		m_Age = age;
		m_height = new int(height);
		cout << "Person5的有参构造函数调用" << endl;
	}
	Person5(const Person5& p) {
		m_Age = p.m_Age;
		//m_height = p.m_height;编译器默认实现这一行代码
		//深拷贝操作
		m_height = new int(*p.m_height);
		cout << "Person5的拷贝构造函数调用" << endl;
	}
	~Person5() {
		//析构函数，将堆区开辟的数据做释放操作
		if (m_height != NULL) {
			delete m_height;
			m_height = NULL;
		}
		cout << "Person5的析构函数调用" << endl;
	}
	int m_Age;
	int* m_height;
};

void test05() {
	Person5 p(23 , 160);
	cout << "p的年龄为：" << p.m_Age << "\tp的身高为：" << *p.m_height << endl;

	Person5 p1(p);
	cout << "p1的年龄为：" << p1.m_Age << "\tp1的身高为：" << *p1.m_height << endl;
}
int main5() {
	test05();
	system("pause");
	return 0;
}