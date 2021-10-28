#include <iostream>
using namespace std;
/*
	设计一个圆类，求圆的周长
	圆求周长的公式：2 * PI * 半径
*/
#define PI 3.14
class Circle
{
	//访问权限
public:
	//属性
	int m_r;
	//行为
	double calculateZC() {
		return 2 * PI * m_r;
	}
};
int main1() {
	//通过圆类创建具体的圆（对象）
	Circle c1;//实例化
	c1.m_r = 10;
	cout << "圆的周长：" << c1.calculateZC() << endl;
	
	system("pause");
	return 0;
}