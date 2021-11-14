#include<iostream>
using namespace std;
#include <vector>
#include<deque>
#include<algorithm>
//选手类
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
		string name = "选手";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		//将创建的对象放入到容器中
		v.push_back(p);
	}
}
void setScore(vector<Person>&v) {
	srand((int)time(NULL));   //包含time.h
							  //将10个评委的分数，放入deque中
	deque<int>d;
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		//10个评委进行打分
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		//排序
		sort(d.begin(), d.end());
		//删除最值
		d.pop_back();
		d.pop_front();

		//取平均值
		int sum = 0;
		for (int i = 0; i < d.size(); i++) {
			sum += d[i];
		}
		int avg = sum / d.size();

		//将分数赋值给选手
		(*it).m_Score = avg;
	}	
}
//打印得分
void showScore(vector<Person>&v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "姓名：" << (*it).m_Name << " 分数：" << (*it).m_Score << endl;
	}
}
int main() {
	//1、创建选手
	vector<Person>v;
	creatPerson(v);
	////测试
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
	//	cout << "姓名：" << (*it).m_Name << " 分数：" << (*it).m_Score << endl;
	//}
	//2、给5名选手打分
	setScore(v);
	//3、显示最后得分
	showScore(v);
	system("pause");
	return 0;
}