#include <iostream>
using namespace std;
#include <vector>
/*
	vector��ֵ������
		* `vector& operator=(const vector &vec);`//���صȺŲ�����
		* `assign(beg, end);`       //��[beg, end)�����е����ݿ�����ֵ������
		* `assign(n, elem);`        //��n��elem������ֵ������
*/
void printVector2(vector<int>& v) {

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//��ֵ����
void test02()
{
	vector<int> v1; //�޲ι���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector2(v1);

	vector<int>v2;
	v2 = v1;
	printVector2(v2);

	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	printVector2(v3);

	vector<int>v4;
	v4.assign(10, 100);
	printVector2(v4);
}

int main2() {

	test02();

	system("pause");

	return 0;
}