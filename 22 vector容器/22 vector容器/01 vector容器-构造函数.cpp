#include <iostream>
using namespace std;
#include <vector>
/*
	vector�������죺
		
*/
void vectorPrint1(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "  ";
	}
	cout << endl;
}
void test01() {
	vector<int>v1;		//Ĭ�Ϲ���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i + 1);
	}
	vectorPrint1(v1);

	//ͨ������ķ�ʽ���й���
	vector<int>v2(v1.begin(), v1.end());
	vectorPrint1(v2);

	//n��elem�ķ�ʽ���й���
	vector<int>v3(10, 100);
	vectorPrint1(v3);

	//��������
	vector<int>v4(v3);
	vectorPrint1(v4);
}
int main1() {
	test01();
	system("pause");
	return 0;
}