#include <iostream>
using namespace std;
/*
	���һ��Բ�࣬��Բ���ܳ�
	Բ���ܳ��Ĺ�ʽ��2 * PI * �뾶
*/
#define PI 3.14
class Circle
{
	//����Ȩ��
public:
	//����
	int m_r;
	//��Ϊ
	double calculateZC() {
		return 2 * PI * m_r;
	}
};
int main1() {
	//ͨ��Բ�ഴ�������Բ������
	Circle c1;//ʵ����
	c1.m_r = 10;
	cout << "Բ���ܳ���" << c1.calculateZC() << endl;
	
	system("pause");
	return 0;
}