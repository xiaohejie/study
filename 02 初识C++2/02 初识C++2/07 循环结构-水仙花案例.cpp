#include <iostream>
using namespace std;
int main7() {
	//ˮ�ɻ�������ָһ��3λ��������ÿ��λ�ϵ����ֵ�3����֮�͵���������
	//���� 1^3 + 5^3 + 3^3 = 153
	int n = 0;
	int a, b, c;
	cout << "�����������жϵ�����" << endl;
	cin >> n;
	a = n % 10; 
	b = n / 10 % 10;
	c = n / 100;
	if (a*a*a + b*b*b + c*c*c == n) {
		cout << "����Ϊˮ�ɻ�����" << endl;
	}
	else
	{
		cout << "��������ˮ�ɻ�����" << endl;
	}
	system("pause");
	return 0;
}