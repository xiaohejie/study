#include <iostream>
using namespace std;
class Point
{
public:
	void setX(int x) {
		m_X = x;
	}
	int getX() {
		return m_X;
	}
	void setY(int y) {
		m_Y = y;
	}
	int getY() {
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};

class Circle
{
public:
	void setR(int r) {
		m_R = r;
	}
	int getR() {
		return m_R;
	}
	void setCenter(Point p) {
		m_Center = p;
	}
	Point getCenter() {
		return m_Center;
	}

private:
	int m_R;
	Point m_Center;
	/*int m_X;
	int m_Y;*/

};

void isInCircle(Circle& c , Point& p) {
	//����������֮���ƽ��
	int distance = pow(c.getCenter().getX() - p.getX(), 2) + pow(c.getCenter().getY() - p.getY(), 2);
	//����뾶��ƽ��
	int rDistance = pow(c.getR(), 2);
	//�жϹ�ϵ
	if (distance == rDistance) {
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance) {
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main() {
	Point p;
	p.setX(0);
	p.setY(0);

	Point p1;
	p1.setX(5);
	p1.setY(0);
	Circle c;
	c.setR(5);
	c.setCenter(p1);

	isInCircle(c , p);
	system("pause");
	return 0;
}