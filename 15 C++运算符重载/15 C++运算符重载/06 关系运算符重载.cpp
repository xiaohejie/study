#include <iostream>
using namespace std;
class Person06 {
public:
	Person06(string name, int age) {
		m_Name = name;
		m_Age = age;
	}
	//重载关系运算符==
	bool operator==(Person06& p) {
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;
};
void test06() {
	Person06 p1("何捷", 23);
	Person06 p2("何捷",24);

	if (p1 == p2)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等" << endl;
	}

}
int main06() {
	test06();
	system("pause");
	return 0;
}