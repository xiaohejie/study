#include <iostream>
using namespace std;
#include <deque>
/*
* ���˲��������
	- `push_back(elem);`          //������β�����һ������
	- `push_front(elem);`        //������ͷ������һ������
	- `pop_back();`                   //ɾ���������һ������
	- `pop_front();`                 //ɾ��������һ������
*ָ��λ�ò�����
	* `insert(pos,elem);`         //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
	* `insert(pos,n,elem);`     //��posλ�ò���n��elem���ݣ��޷���ֵ��
	* `insert(pos,beg,end);`    //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
	* `clear();`                           //�����������������
	* `erase(beg,end);`             //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
	* `erase(pos);`                    //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
*/
void printDeque04(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}
//���˲���
void test04()
{
	deque<int> d;
	//β��
	d.push_back(10);
	d.push_back(20);
	//ͷ��
	d.push_front(100);
	d.push_front(200);

	printDeque04(d);

	//βɾ
	d.pop_back();
	//ͷɾ
	d.pop_front();
	printDeque04(d);
}

//����
void test04_1()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque04(d);

	d.insert(d.begin(), 1000);
	printDeque04(d);

	d.insert(d.begin(), 2, 10000);
	printDeque04(d);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque04(d);

}

//ɾ��
void test04_2()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque04(d);

	d.erase(d.begin());
	printDeque04(d);

	d.erase(d.begin(), d.end());
	d.clear();
	printDeque04(d);
}

int main4() {

	//test04();

	//test04_1();

	test04_2();

	system("pause");

	return 0;
}