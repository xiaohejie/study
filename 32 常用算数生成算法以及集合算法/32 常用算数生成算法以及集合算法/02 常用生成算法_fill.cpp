#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	`fill(iterator beg, iterator end, value);  `
		// �����������Ԫ��
		// beg ��ʼ������
		// end ����������
		// value ����ֵ
*/
class myPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test02()
{

	vector<int> v;
	v.resize(10);
	//���
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}

int main02() {

	test02();

	system("pause");

	return 0;
}