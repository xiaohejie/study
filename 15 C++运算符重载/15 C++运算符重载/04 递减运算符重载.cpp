#include <iostream>
using namespace std;
class MyInetger {
	friend ostream& operator<<(ostream& cout, MyInetger myint);
public:
	MyInetger() {
		m_Num = 0;
	}
	//ÖØÔØÇ°ÖÃ--ÔËËã·û
	MyInetger& operator--() {
		m_Num--;
		return *this;
	}
private:
	int m_Num;
};
//
//×óÒÆÔËËã·ûÖØÔØ
ostream& operator<<(ostream& cout , MyInetger myint) {
	cout << myint.m_Num;
	return cout;
}
void test04() {
	MyInetger myint;
	cout << myint << endl;
	cout << --myint << endl;
}
int main() {
	test04();
	system("pause");
	return 0;
}