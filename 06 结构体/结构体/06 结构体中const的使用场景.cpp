#include <iostream>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
//���������βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printMess( student * p) {
	cout << "������" << p->name << endl;
	cout << "���䣺" << p->age << endl;
	cout << "������" << p->score << endl;
}
int main6() {
	/*
		�ṹ����const��ʹ�ó�����
			
	*/
	student stu = { "�ν�" ,23,100 };
	printMess(&stu);
	system("pause");
	return 0;
}