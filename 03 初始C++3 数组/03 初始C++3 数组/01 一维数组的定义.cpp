#include <iostream>
using namespace std;
int main1() {
	//����
	/*
		1���������� ������[ ���鳤�� ];
		2���������� ������[ ���鳤�� ] = {ֵ1 �� ֵ2 }��
		3���������� ������ = { ֵ1 �� ֵ2 }��
	*/

	/*
		һά�������;��
			1������ͳ�������������ڴ��еĳ��ȣ�sizeof(arr)
			2�����Ի�ȡ�������ڴ��е��׵�ַ
	*/
	int arr[5] = { 1 , 2 ,3 ,4 ,5 };
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	//cout << arr.length << endl;
	cout << arr << endl;
	cout << &arr[0] << endl;

	system("pause");
	return 0;
}