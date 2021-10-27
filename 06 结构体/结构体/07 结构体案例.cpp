#include <iostream>
using namespace std;
struct student
{
	string name;
	int score;
};
struct teacher
{
	string name;
	struct student stu[5];
};
void fun(teacher tea[] , int len) {
	for (int i = 0; i < len; i++)
	{
		tea[i].name = "teacher_";
		tea[i].name += i;
		for (int j = 0; j < 5; j++)
		{
			tea[i].stu[j].name = "student_";
			tea[i].stu[j].name += j;
			tea[i].stu[j].score = rand() % 61 + 40;

		}

	}
	//cout << tea << endl;
}
void printInfo(teacher tea[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << "老师：" << tea[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生：" << tea[i].stu[j].name << "\t成绩为："
				<< tea[i].stu[j].score << endl;
		}
	}
}
int main7() {
	/*
		设计学生和老师的案例
	*/
	//随机数种子
	srand((unsigned int)time(NULL));
	teacher tea[3];
	fun(tea, 3);
	printInfo(tea, 3);
	system("pause");
	return 0;
}