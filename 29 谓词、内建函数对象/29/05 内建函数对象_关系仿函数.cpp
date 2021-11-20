#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
	��ϵ�º�����
		* `template<class T> bool equal_to<T>`                    //����
		* `template<class T> bool not_equal_to<T>`            //������
		* `template<class T> bool greater<T>`                      //����
		* `template<class T> bool greater_equal<T>`          //���ڵ���
		* `template<class T> bool less<T>`                           //С��
		* `template<class T> bool less_equal<T>`               //С�ڵ���
*/
class MyCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

void test05() {
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "  ";
	}
	cout << endl;

	//����
	//sort(v.begin(), v.end(), MyCompare());
	//Ҳ����ʹ���ڽ���������:greater<>()
	sort(v.begin(), v.end(), greater<>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << "  ";
	}
	cout << endl;
}
int main05() {
	test05();
	system("pause");
	return 0;
}