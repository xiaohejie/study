#include <iostream>
using namespace std;
#include <map>
/*
	map中所有元素都是成对出现，插入数据时候要使用对组
*/
void printMap01(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int>m; //默认构造
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	printMap01(m);

	map<int, int>m2(m); //拷贝构造
	printMap01(m2);

	map<int, int>m3;
	m3 = m2; //赋值
	printMap01(m3);
}

int main1() {

	test01();

	system("pause");

	return 0;
}