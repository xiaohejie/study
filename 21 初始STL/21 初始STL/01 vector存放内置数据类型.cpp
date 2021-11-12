#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>		//��׼�㷨��ͷ�ļ�
/*
	vector����:
		
*/
void myPrint(int val) {
	cout << val << endl;
}

int main1() {
	//����һ��vector����������
	vector<int>v;
	//�������в�������
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	//ͨ�����������������е�����
	vector<int>::iterator itBegin = v.begin();		//��ʼ��������ָ�������е�һ��Ԫ��
	vector<int>::iterator itEnd = v.end();			//������������ָ�����������һ��Ԫ�ص���һ��λ��

	//��һ�ֵı�����ʽ
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	//�����ֱ�����ʽ������STL�ṩ�ı����㷨
	for_each(v.begin(), v.end(), myPrint);

	system("pause");
	return 0;
}