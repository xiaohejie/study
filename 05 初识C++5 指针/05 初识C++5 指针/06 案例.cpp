#include <iostream>
using namespace std;

void sort(int *p , int len) {

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (*(p + j) > *(p + j + 1)) {
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
}

int main() {
	/*
		��װһ������������ð������ʵ�ֶ��������������
	*/
	int arr[] = { 21,4,54,5248,12,48,2,48,543,2,48,16,84 };
	int length = sizeof(arr) / sizeof(arr[0]);

	sort(arr, length);
	cout << "������˳��Ϊ��";
	for (int i = 0; i < length; i++)
	{
		cout <<  arr[i] << " ";
	}
	cout << endl; 
	system("pause");
	return 0;
}