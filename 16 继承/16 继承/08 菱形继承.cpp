#include <iostream>
using namespace std;
/*
	���μ̳У�
		-����������̳�ͬһ�����࣬����ĳ����ͬʱ�̳����������࣬���ּ̳г�Ϊ���μ̳�

	���μ̳����⣺
		1����̳��˶�������ݣ���ͬ���̳��˶�������ݣ�������ʹ������ʱ���ͻ���������ԡ�
		2�����ռ̳��Ӷ�������ݼ̳������ݣ�����������������ֻ��Ҫһ�����ᵼ����Դ�˷ѡ�

	������̳п��Խ�����μ̳е�����:
		�̳�֮ǰ���Ϲؼ���virtual��Ϊ��̳�
		Animal���Ϊ�����
*/
//������
class Animals {
public:
	int m_Age;
};

//����
class Sheep :virtual public Animals {};

//����
class Tuo :virtual public Animals{};

//������
class SheepTuo :public Sheep , public Tuo{};

void Test08() {
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	cout << st.Sheep::m_Age << endl;
	cout << st.Tuo::m_Age << endl;
	cout << st.m_Age << endl;

}

int main() {
	Test08();
	system("pause");
	return 0;
}