#include<iostream>
using namespace std;
#include <set>
/*
	setÈİÆ÷-²åÈëºÍÉ¾³ı£º
		* ²åÈë   --- insert
		* É¾³ı   --- erase
		* Çå¿Õ   --- clear
*/
void printSet03(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//²åÈëºÍÉ¾³ı
void test03()
{
	set<int> s1;
	//²åÈë
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printSet03(s1);

	//É¾³ı
	s1.erase(s1.begin());
	printSet03(s1);

	s1.erase(30);
	printSet03(s1);

	//Çå¿Õ
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet03(s1);
}

int main3() {

	test03();

	system("pause");

	return 0;
}