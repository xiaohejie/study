#include <iostream>
using namespace std;
int main2() {
	/*
		Ԫ�ص����ã�
			
	*/
	int arr[] = { 1,2,3,41,545,21,47,2,485,34,8 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	while (start <= end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << "���ú�Ϊ��";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0])-1; i++)
	{
		cout << arr[i] << "\t";
	}
	system("pause");
	return 0;
}