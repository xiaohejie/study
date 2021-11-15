#include <iostream>
using namespace std;
#include <list>
/*
	list容器：
		* `reverse();`   //反转链表
		* `sort();`        //链表排序
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

//反转和排序
void test06()
{
	list<int> L;
	L.push_back(90);
	L.push_back(30);
	L.push_back(20);
	L.push_back(70);
	printList06(L);

	//反转容器的元素
	L.reverse();
	printList06(L);

	//排序
	L.sort(); //默认的排序规则 从小到大
	printList06(L);

	L.sort(myCompare); //指定规则，从大到小
	printList06(L);
}

int main6() {

	test06();

	system("pause");

	return 0;
}