#include <iostream>
using namespace std;
#include <list>
/*
	list������
		* `reverse();`   //��ת����
		* `sort();`        //��������
*/
void printList06(const list<int>& L) {

	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int val1, int val2)
{
	return val1 > val2;
}

//��ת������
void test06()
{
	list<int> L;
	L.push_back(90);
	L.push_back(30);
	L.push_back(20);
	L.push_back(70);
	printList06(L);

	//��ת������Ԫ��
	L.reverse();
	printList06(L);

	//����
	L.sort(); //Ĭ�ϵ�������� ��С����
	printList06(L);

	L.sort(myCompare); //ָ�����򣬴Ӵ�С
	printList06(L);
}

int main6() {

	test06();

	system("pause");

	return 0;
}