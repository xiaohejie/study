#include <iostream>
using namespace std;
/*
	��Ա��������Ϊ˽�У�
		�ŵ㣺�����г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ�ޣ�
			  ����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
*/
class Person {
public:
	//��������
	void setName(string name) {
		m_Name = name;
	}
	//��ȡ����
	string getName() {
		return m_Name;
	}
private:
	string m_Name = "����";//�޸�Ȩ�ޣ��ɶ���д
	int m_Age;//ֻ��
	string m_Lover;//ֻд
};
int main4() {
	Person p;
	p.setName("����");
	string name = p.getName();
	cout << name << endl;
	system("pause");
	return 0;
}