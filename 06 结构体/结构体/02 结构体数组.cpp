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
		�ṹ�����飺
			1������ṹ��
			2�������ṹ������
			3�����ṹ�������е�Ԫ�ظ�ֵ
			4�������ṹ������
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