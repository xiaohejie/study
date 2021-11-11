#include <iostream>
using namespace std;
#include "MyArray.hpp"
/*
	类模板案例：
*		可以对内置数据类型以及自定义数据类型的数据进行存储
*		将数组中的数据存储到堆区
*		构造函数中可以传入数组的容量
*		提供对应的拷贝构造函数以及operator=防止浅拷贝问题
*		提供尾插法和尾删法对数组中的数据进行增加和删除
*		可以通过下标的方式访问数组中的元素
*		可以获取数组中当前元素个数和数组的容量
*/
void printArray(MyArray<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void test09() {
	MyArray<int>arr1(5);
	/*MyArray<int>arr2(arr1);
	MyArray<int>arr3(100);
	arr3 = arr1;*/
	for (int i = 0; i < 5; i++)
	{
		arr1.PushBack(i);
	}

	cout << "arr1的打印输出为：" << endl;

	printArray(arr1);

	cout << "容量为：" << arr1.getCapacity() << endl;
	cout << "大小为：" << arr1.getSize() << endl;

	int size = arr1.getSize();
	for (int i = 0; i < size; i++)
	{
		arr1.PopBack();
	}
	cout << "删除后arr1的打印输出为：" << endl;

	printArray(arr1);

	cout << "删除后容量为：" << arr1.getCapacity() << endl;
	cout << "删除后大小为：" << arr1.getSize() << endl;
}

//测试自定义的数据类型
class Person {
public:
	Person() {};
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	};
	string m_Name;
	int m_Age;

};
void printPersonArray(MyArray<Person>& arr) {
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i].m_Name << "  ";
	}
	cout << endl;
}
void test09_1() {
	MyArray<Person>p(10);

	Person p1("孙悟空", 999);
	Person p2("沙和尚", 3999);
	Person p3("猪八戒", 2999);
	Person p4("达摩", 99);
	Person p5("孙空", 199);

	//将数据插入到数组中
	p.PushBack(p1);
	p.PushBack(p2);
	p.PushBack(p3);
	p.PushBack(p4);
	p.PushBack(p5);

	//打印数组
	printPersonArray(p);

	cout << "容量为：" << p.getCapacity() << endl;
	cout << "大小为：" << p.getSize() << endl;

	p.PopBack();

	//打印数组
	printPersonArray(p);
}
int main() {
	test09_1();
	system("pause");
	return 0;
}