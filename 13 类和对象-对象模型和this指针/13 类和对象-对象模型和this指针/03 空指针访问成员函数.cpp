#include <iostream>
using namespace std;
/*
	��ָ����ʳ�Ա������
		
*/
class Person03 {
public:
	void showClassName() {
		cout << "this is person class" << endl;
	}
	void showPersonAge() {
		//����ԭ�����ָ��ΪNULL��
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