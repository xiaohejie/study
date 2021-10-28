#include <iostream>
using namespace std;
/*
	����������ࣺ
		������������������
		�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
*/

class Cube {
private:
	int m_L;
	int m_H;
	int m_W;

public:
	void setL(int l) {
		m_L = l;
	}
	int getL() {
		return m_L;
	}
	void setH(int h) {
		m_H = h;
	}
	int getH() {
		return m_H;
	}
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}
	//�������
	int getArea() {
		return 2 * (m_L * m_H + m_L * m_W + m_H * m_W);
	}
	//�������
	int getVolume() {
		return m_L * m_H * m_W;
	}
	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube& c) {
		if (m_H == c.getH() && m_W == c.getW() && m_L == c.getL())
		{
			return true;
		}
		return false;
	}
};
bool isSame(Cube& c1, Cube& c2) {
	if (c1.getH() == c2.getH() && c1.getW() == c2.getW() && c1.getL() == c2.getL())
	{
		return true;
	}
	return false;
}
int main5() {
	Cube c1;
	c1.setL(1);
	c1.setH(2);
	c1.setW(2);
	cout << "c1�����Ϊ��" << c1.getArea() << endl;
	cout << "c1�����Ϊ��" << c1.getVolume() << endl;
	cout << "********************" << endl;
	Cube c2;
	c2.setL(1);
	c2.setH(2);
	c2.setW(2);
	cout << "c2�����Ϊ��" << c2.getArea() << endl;
	cout << "c2�����Ϊ��" << c2.getVolume() << endl;

	bool res1 = isSame(c1, c2);
	bool res2 = c1.isSameByClass(c2);
	cout << res1 << endl;
	cout << res2 << endl;

	system("pause");
	return 0;
}