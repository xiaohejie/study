#include <iostream>
using namespace std;
/*
	构造函数的分类以及调用：
	两种分类方式：
		按参数分为：有参构造和无参构造
		按类型分为：普通构造和拷贝构造
	三种调用方式：
		括号法;
		显示法；
		隐式转换法；

*/
class Person {
public:
	Person() {
		cout << "Person的无参构造函数调用" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person& p) {
		//将传入的人身上的所有属性拷贝到我身上
		cout << "Person的拷贝函数的调用" << endl;
		age = p.age;
	}
	~Person() {
		cout << "Person的析构函数的调用" <<endl;
	}

private:
	int age;

};
//void test2() {
//	//1、括号法
//	Person p1;//默认构造函数调用
//	Person p2(10);//会调用有参构造函数
//	Person p3(p2);//调用拷贝构造函数
//
//	//注意事项：
//		//调用默认构造函数时，不要加()；
//		//因为下面这行代码，编译器会认为是一个函数的声明，不会认为在创建对象
//	Person p1();
//	//2、显示法
//	Person p1;
//	Person p2 = Person(10);//有参构造
//	Person p3 = Person(p2);//拷贝构造
//
//	//Person(10);//匿名对象	特点：当前行执行结束时，系统会立即回收匿名对象
//	//注意事项2：不要利用拷贝构造函数来初始化匿名对象，编译器会认为Person(p3) === Person p3;会认为是对象的声明
//	//Person(p3);
//
//	//3、隐式转换法
//	Person p4 = 10;		//相当于写了Person p4 = Person(10)
//	Person p5 = p4;		//有参构造
//}	
int main2() {
	//test2();
	system("pause");
	return 0;
}