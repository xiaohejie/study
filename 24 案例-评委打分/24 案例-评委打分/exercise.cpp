#include<iostream>
using namespace std;
#include <vector>
#include<deque>
#include<algorithm>
//ѡ����
class Person {
public:
	Person(string name, int score) {
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;
};
void creatPerson(vector<Person>&v) {
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		//�������Ķ�����뵽������
		v.push_back(p);
	}
}
void setScore(vector<Person>&v) {
	srand((int)time(NULL));   //����time.h
							  //��10����ί�ķ���������deque��
	deque<int>d;
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		//10����ί���д��
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		//����
		sort(d.begin(), d.end());
		//ɾ����ֵ
		d.pop_back();
		d.pop_front();

		//ȡƽ��ֵ
		int sum = 0;
		for (int i = 0; i < d.size(); i++) {
			sum += d[i];
		}
		int avg = sum / d.size();

		//��������ֵ��ѡ��
		(*it).m_Score = avg;
	}	
}
//��ӡ�÷�
void showScore(vector<Person>&v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "������" << (*it).m_Name << " ������" << (*it).m_Score << endl;
	}
}
int main() {
	//1������ѡ��
	vector<Person>v;
	creatPerson(v);
	////����
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
	//	cout << "������" << (*it).m_Name << " ������" << (*it).m_Score << endl;
	//}
	//2����5��ѡ�ִ��
	setScore(v);
	//3����ʾ���÷�
	showScore(v);
	system("pause");
	return 0;
}