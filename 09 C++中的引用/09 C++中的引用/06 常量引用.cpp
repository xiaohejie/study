#include <iostream>
using namespace std;
void showValue(const int& val) {
	//val = 1000;  
	cout << val << endl;
}
int main() {
	/*
		�������ã���Ҫ���������βΣ���ֹ�������
			�ں����б��У�������const�����βΣ���ֹ�βθı�ʵ�Σ�
	*/
	//int a = 10;
	//int& ref = a;//������ʹ��int& ref = 10;��Ϊ���ñ�����һ��Ϸ����ڴ�ռ�

	//const int& ref1 = 10;//����const֮�󣬱������Ὣ�����޸� int temp = 10;const int& ref  = temp; 
	//ref1 = 20;//����const֮���Ϊֻ�����Ͳ����޸�
	
	
	int a = 100;
	showValue(a);
	cout << a << endl;
	system("pause");
	return 0;
}