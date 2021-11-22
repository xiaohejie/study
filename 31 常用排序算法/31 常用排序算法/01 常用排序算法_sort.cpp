#include<iostream>
#include <vector>
#include "algorithm"
using namespace std;
/*
	sort(iterator beg, iterator end, _Pred);  `
		// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
		//  beg    ��ʼ������
		//  end    ����������
		// _Pred  ν��
*/
void myPrint(int val) {
	
	cout << val << "  ";
}
void test01() {
	vector<int>v;
	srand((unsigned)time(NULL));
	for (int i = 0; i<100; i++)
	{
		int random = rand() % 50;
		v.push_back(random);
	}
	//����sort��������
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//�ı�Ϊ����
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}
int main01() {
	test01();
	system("pause");
	return 0;
}