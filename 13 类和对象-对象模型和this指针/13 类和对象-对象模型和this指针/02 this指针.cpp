#include <iostream>
using namespace std;
/*
	thisָ����
		C++�г�Ա�����ͳ�Ա�����Ƿֿ��洢��
		ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ���������ͬ���͵Ķ���Ṳ��һ�����
		��ô�����ǣ���һ���������������ĸ���������Լ�

	C++ͨ���ṩ����Ķ���ָ�룬thisָ�룬����������⣬thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
	thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
	thisָ�벻��Ҫ���壬ֱ��ʹ�ü���

	thisָ�����;��
		���βκͳ�Ա����ͬ��ʱ������thisָ�������֣�������Ƴ�ͻ��
		����ķǾ�̬��Ա�����з��ض�������ʳ��return *this�����ض�������*this��
		
*/
class Person02 {
public:
	Person02(int age) {
		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
		this->age = age;
	}
	int age;

	Person02& PersonAddAge(Person02& p) {
		this->age += p.age;

		//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
		return *this;
	}

};
void test02() {
	Person02 p1(18);
	cout << "P1������Ϊ��" << p1.age << endl;
}
void test02_1() {
	Person02 p1(10);
	Person02 p2(10);
	//��ʽ���˼��
	p1.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2).age;
	cout << "p2������Ϊ��" << p1.age << endl;
}
int main2() {
	//test02();
	test02_1();
	system("pause");
	return 0;
}