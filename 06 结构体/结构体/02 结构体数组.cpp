#include <iostream>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
};

int main2() {
	/*
		结构体数组：
			1、定义结构体
			2、创建结构体数组
			3、给结构体数组中的元素赋值
			4、遍历结构体数组
	*/
	struct Student stuArray[3] = 
	{ 
		{"hejie", 23, 100},
		{"hejie1" , 23,100},
		{"hejie2" , 23,100} 
	};


	system("pause");
	return 0;
}