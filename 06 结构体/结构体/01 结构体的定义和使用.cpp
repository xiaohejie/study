#include <iostream>
using namespace std;
//1、创建学生数据类型：
	//自定义数据类型，一些类型集合组成一个类型
struct  Student
{
	//成员列表

	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
}s3;	//顺便创建结构体变量
//2、通过学生类型创建具体学生
	//方法：struct Student s1;
		//  struct Student s2 = {....}
		//  在定义结构体是顺便创建结构体变量
int main1() {
	struct Student s1;	//struct关键字可以省略
	s1.name = "hejie";
	s1.age = 23;
	s1.score = 100;
	cout << s1.name << endl;

	struct Student s2 = { "hejie1" , 23 , 100 };

	system("pause");
	return 0;
}