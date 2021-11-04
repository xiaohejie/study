#include <iostream>
using namespace std;
/*
	虚析构和纯虚析构：
		多态使用时，如果子类有属性开辟到堆区，那么父类指针在释放时无法调用子类的析构代码

	解决方式：将父类中的析构函数改为虚虚构或纯虚析构(子类中如果没有堆区数据，可以不写虚析构或纯虚析构)

	虚析构和纯虚析构的共性：
		-可以解决父类指针释放子类对象
		-都需要有具体的函数实现
	虚析构和纯虚析构区别：
		如果是纯虚析构，该类属于抽象类，无法实例化对象

	语法：
	虚析构语法：
		virtual ~类名(){}
	纯虚虚构语法：
		virtual ~类名() = 0;
		类名::~类名(){}
*/
class Animal {
public:
	Animal() {
		cout << "Animal的构造函数调用" << endl;
	}
	virtual void speak() = 0;

	/*virtual ~Animal() {
		cout << "Animal的析构函数调用" << endl;
	}*/
	//纯虚析构 需要申明也需要实现
	virtual ~Animal() = 0;
};
Animal:: ~Animal() {
	cout << "Animal的纯虚析构函数调用" << endl;
}

class Cat :public Animal {
public:
	Cat(string name) {
		cout << "Cat的构造函数调用" << endl;
		m_Name = new string(name);
	}

	virtual void speak() {
		cout << *m_Name << "猫在叫" << endl;
	}

	~Cat() {
		if (m_Name != NULL)
		{
			cout << "Cat的析构函数调用" << endl;

			//父类指针在析构时候 不会调用子类中析构函数，导致子类如果有堆区属性，会出现内存泄露
			delete m_Name;
			m_Name = NULL;
		}
	}
	string* m_Name;

};
void test04() {
	Animal* animal = new Cat("Tom");
	animal->speak();
	delete animal;
}
int main4() {
	test04();
	system("pause");
	return 0;
}