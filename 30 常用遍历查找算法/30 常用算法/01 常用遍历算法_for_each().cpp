#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	for_each():
		
*/
//��ͨ����
void print01(int val) {
	cout << val << "  ";
}
//�º���
class Print01_1 {
public:
	void operator()(int val) {
		cout << val << "  ";
	}
};
void test01() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print01);//��ͨ�����ź�����
	cout << endl;

	for_each(v.begin(), v.end(), Print01_1());//�º����ź�������
	cout << endl;
}
int main1() {
	test01();
	system("pause");
	return 0;
}