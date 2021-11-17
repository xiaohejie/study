#include<iostream>
using namespace std;
#include <set>
/*
	set��������
		set����Ĭ���������Ϊ��С����������θı��������
		���÷º��������Ըı��������
*/
class MyCompare
{
public:
	//(int v1,int v2)�����const
	bool operator()(int v1,int v2)const {
		return v1 > v2;
	}
};
void test07()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(50);

	//Ĭ�ϴ�С����
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//ָ���������
	set<int, MyCompare> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);
	s2.insert(50);

	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {

	test07();

	system("pause");

	return 0;
}