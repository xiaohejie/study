#include <iostream>
using namespace std;

int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;

}
int main1() {
	/*
		�����Ķ��壺
			����ֵ���� ������(�����б�){
				��������䣻
				return���ʽ��
			}
	*/
	int sum = add(1, 2);
	cout << sum << endl;

	system("pause");
	return 0;
}
