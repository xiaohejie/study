#include <iostream>
using namespace std;
#include <list>
/*
	list�����Ĺ��캯����
		* `list<T> lst;`          //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
		* `list(beg,end);`        //���캯����[beg, end)�����е�Ԫ�ؿ���������
		* `list(n,elem);`            //���캯����n��elem����������
		* `list(const list &lst);`     //�������캯����

*/
void printList(const list<int>& l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << "  ";
	}
	cout << endl;
}
void test01() {
	list<int>l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printList(l1);

	//���䷽ʽ����
	list<int>l2(l1.begin(), l1.end());
	printList(l2);

	//��������
	list<int>l3(l2);
	printList(l3);

	//n��elem
	list<int>l4(10, 1000);
	printList(l4);
}
int main1() {
	test01();
	system("pause");
	return 0;
}