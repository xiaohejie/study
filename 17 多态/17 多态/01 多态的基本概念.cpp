#include <iostream>
using namespace std;
/*
	多态：
		静态多态：函数重载 和 运算符重载属于静态重载，复用函数名
		动态多态：派生类 和 虚函数实现运行时多态

	静态和动态的区别：
		-静态多态的函数地址早绑定 - 编译阶段确定函数的地址
		-动态多态的函数地址晚绑定 - 运行阶段确定函数的地址

	动态多态的满足条件：
		1、有继承关系
		2、子类重写父类的虚函数

	动态多态的使用：
		父类的指针或者引用 执行子类对象

	多态带来的好处：
		1、组织结构清晰
		2、可读性强
		3、对于前期和后期扩展以及维护性高

	重写：函数返回值类型 函数名 参数列表 完全一致称为重写
*/
//动物类
//class Animals {
//public:
//	virtual void speak() {
//		cout << "动物在说话！" << endl;
//	}
//};
//
////猫类
//class Cat : public Animals {
//public:
//	void speak() {
//		cout << "猫在叫！" << endl;
//	}
//
//};
//
////执行说话的函数
////这种是地址早绑定，在编译阶段就确定函数的地址
////如果想输出猫，那么这个函数地址就不能够提前绑定，需要进行地址晚绑定：加关键字 virtual
//void doSpeak(Animals& animal) {
//	animal.speak();
//}
//
//void test1() {
//	Cat cat;
//	doSpeak(cat);
//}
//
//void test1_1() {
//	cout << sizeof(Animals) << endl;
//}
int main1() {
	//test1_1();
	system("pause");
	return 0;
}