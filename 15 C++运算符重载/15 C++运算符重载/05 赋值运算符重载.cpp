#include <iostream>
using namespace std;
/*
	C++���������ٸ�һ�������4��������
		1��Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
		2��Ĭ�������������޲Σ�������Ϊ�գ�
		3��Ĭ�Ͽ������캯���������Խ���ֵ����
		4����ֵ�����operator=�������Խ���ֵ����

		�������������ָ�����������ֵ����ʱҲ�������ǳ����������
		(�����ڴ��ظ��ͷţ�������������������ǳ��������)
*/
class Person05 {
public:
	Person05(int age) {
		m_Age = new int(age);//�����ݴ����ڶ�����new int���ص���int*
	}
	~Person05() {
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL; 
		}
	}
	//���ظ�ֵ�����
	Person05& operator=(Person05 &p) {
		//��������ǳ����
		//m_Age = p.m_Age;
		
		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ���ٽ������
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//���
		m_Age = new int(*p.m_Age);

		//���ض�����
		return *this;
	}
	int* m_Age;

};
void test05() {
	Person05 p(23);
	Person05 p1(24);
	Person05 p2(25);
	p1 = p = p2;
	cout << "p������Ϊ��" << *p.m_Age << endl;
	cout << "p1������Ϊ��" << *p1.m_Age << endl;
	cout << "p2������Ϊ��" << *p2.m_Age << endl;
}
int main5() {
	test05();
	system("pause");
	return 0;
}