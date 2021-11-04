#include <iostream>
using namespace std;
/*
	�������ʹ���������
		��̬ʹ��ʱ��������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷������������������

	�����ʽ���������е�����������Ϊ���鹹��������(���������û�ж������ݣ����Բ�д��������������)

	�������ʹ��������Ĺ��ԣ�
		-���Խ������ָ���ͷ��������
		-����Ҫ�о���ĺ���ʵ��
	�������ʹ�����������
		����Ǵ����������������ڳ����࣬�޷�ʵ��������

	�﷨��
	�������﷨��
		virtual ~����(){}
	�����鹹�﷨��
		virtual ~����() = 0;
		����::~����(){}
*/
class Animal {
public:
	Animal() {
		cout << "Animal�Ĺ��캯������" << endl;
	}
	virtual void speak() = 0;

	/*virtual ~Animal() {
		cout << "Animal��������������" << endl;
	}*/
	//�������� ��Ҫ����Ҳ��Ҫʵ��
	virtual ~Animal() = 0;
};
Animal:: ~Animal() {
	cout << "Animal�Ĵ���������������" << endl;
}

class Cat :public Animal {
public:
	Cat(string name) {
		cout << "Cat�Ĺ��캯������" << endl;
		m_Name = new string(name);
	}

	virtual void speak() {
		cout << *m_Name << "è�ڽ�" << endl;
	}

	~Cat() {
		if (m_Name != NULL)
		{
			cout << "Cat��������������" << endl;

			//����ָ��������ʱ�� �����������������������������������ж������ԣ�������ڴ�й¶
			delete m_Name;
			m_Name = NULL;
		}
	}
	string* m_Name;

};
void test04() {
	Animal* animal = new Cat("Tom");
	animal->speak();
	delete animal;
}
int main4() {
	test04();
	system("pause");
	return 0;
}