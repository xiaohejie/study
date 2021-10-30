#include <iostream>
using namespace std;
/*
	空指针访问成员函数：
		
*/
class Person03 {
public:
	void showClassName() {
		cout << "this is person class" << endl;
	}
	void showPersonAge() {
		//报错原因传入的指针为NULL；
		if (this == NULL) {
			return;
		}
		cout << "age = " << m_Age << endl;
	}
	int m_Age;
};
void test03() {
	Person03* p = NULL;
	p->showClassName();
	p->showPersonAge();
}
int main3() {
	test03();
	system("pause");
	return 0;
}