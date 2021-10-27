#include <iostream>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
//将函数的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printMess( student * p) {
	cout << "姓名：" << p->name << endl;
	cout << "年龄：" << p->age << endl;
	cout << "分数：" << p->score << endl;
}
int main6() {
	/*
		结构体中const的使用场景：
			
	*/
	student stu = { "何捷" ,23,100 };
	printMess(&stu);
	system("pause");
	return 0;
}