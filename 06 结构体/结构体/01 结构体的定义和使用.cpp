#include <iostream>
using namespace std;
//1������ѧ���������ͣ�
	//�Զ����������ͣ�һЩ���ͼ������һ������
struct  Student
{
	//��Ա�б�

	//����
	string name;
	//����
	int age;
	//����
	int score;
}s3;	//˳�㴴���ṹ�����
//2��ͨ��ѧ�����ʹ�������ѧ��
	//������struct Student s1;
		//  struct Student s2 = {....}
		//  �ڶ���ṹ����˳�㴴���ṹ�����
int main1() {
	struct Student s1;	//struct�ؼ��ֿ���ʡ��
	s1.name = "hejie";
	s1.age = 23;
	s1.score = 100;
	cout << s1.name << endl;

	struct Student s2 = { "hejie1" , 23 , 100 };

	system("pause");
	return 0;
}