#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	`copy(iterator beg, iterator end, iterator dest);  `
		// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
		// beg  ��ʼ������
		// end  ����������
		// dest Ŀ����ʼ������

		����copy�㷨�ڿ���ʱ��Ŀ�������ǵ���ǰ���ٿռ�
*/
class myPrint {
public:
	void operator()(int val) {
		cout << val << "  ";
	}
};
void test05() {
	vector<int>v;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int random = rand() % 50;
		v.push_back(random);
	}
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
	vector<int>v1;
	v1.resize(v.size());
	copy(v.begin(), v.end(), v1.begin());

	for_each(v1.begin(), v1.end(), myPrint());
	cout << endl;
}
int main05() {
	test05();
	system("pause");
	return 0;
}