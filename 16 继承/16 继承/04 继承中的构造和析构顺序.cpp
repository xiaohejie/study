#include <iostream>
using namespace std;
/*
	继承中的析构和构造顺序：
		先构造父类，再构造子类，析构的顺序和构造的顺序相反
*/
class Base04 {
public:
	Base04() {
		cout << "Base的构造函数！ " << endl;
	}
	~Base04() {
		cout << "Base的析构函数！" << endl;
	}

};
class Son04 : public Base04 {
public:
	Son04() {
		cout << "Son的构造函数！ " << endl;
	}
	~Son04() {
		cout << "Son的析构函数！" << endl;
	}
};
void test04() {
	//Base04 b;
	Son04 s;
}
int main4() {
	test04();
	system("pause");
	return 0;
}