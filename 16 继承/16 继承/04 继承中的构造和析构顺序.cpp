#include <iostream>
using namespace std;
/*
	�̳��е������͹���˳��
		�ȹ��츸�࣬�ٹ������࣬������˳��͹����˳���෴
*/
class Base04 {
public:
	Base04() {
		cout << "Base�Ĺ��캯���� " << endl;
	}
	~Base04() {
		cout << "Base������������" << endl;
	}

};
class Son04 : public Base04 {
public:
	Son04() {
		cout << "Son�Ĺ��캯���� " << endl;
	}
	~Son04() {
		cout << "Son������������" << endl;
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