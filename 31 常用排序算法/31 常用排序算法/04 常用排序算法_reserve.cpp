#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	reserve:
		�﷨��`reverse(iterator beg, iterator end);  `
		// ��תָ����Χ��Ԫ��
		// beg ��ʼ������
		// end ����������
*/
class myPrint {
public:
	void operator()(int val) {
		cout << val << "  ";
	}
};
void test04() {
	vector<int>v;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int random = rand() % 50;
		v.push_back(random);
	}
	cout << "��תǰ��" << endl;
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

	cout << "��ת��" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

}
int main04() {
	test04();
	system("pause");
	return 0;
}