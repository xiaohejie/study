#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
/*
	�߼��º�����
		* `template<class T> bool logical_and<T>`              //�߼���
		* `template<class T> bool logical_or<T>`                //�߼���
		* `template<class T> bool logical_not<T>`              //�߼���
*/
void test06() {
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(false);
	v.push_back(true);
	v.push_back(true);

	//�����߼��� ������v���˵�����v2�У���ִ��ȥ������
	vector<bool>v2;
	v2.resize(v.size());		//���ٿռ�
	//transform������
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++) {
		cout << *it << "  ";
	}
	cout << endl;
}
int main() {
	test06();
	system("pause");
	return 0; 
}