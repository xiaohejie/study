#include <iostream>
using namespace std;
#include <vector>
//#include <algorithm>
/*
	�º������� bool ���͵ķº�����Ϊ**ν��**
*/
//һԪν��
class GreaterFive {
public:
	bool operator()(int val) {
		return val > 5;
	}
};
void test02() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//������������û�д���5������
	//GreaterFive()�������ĺ�������
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "δ�ҵ���" << endl;
	}
	else
	{
		cout << "�ҵ��ˣ�����Ϊ��" << *it << endl;
	}
}
int main2() {
	test02();
	system("pause");
	return 0;
}