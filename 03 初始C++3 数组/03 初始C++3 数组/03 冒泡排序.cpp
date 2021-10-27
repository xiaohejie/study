#include <iostream>
using namespace std;
int main() {
	/*
		√∞≈›≈≈–Ú£∫
	*/
	int arr[] = { 1,4,5,24,53,4,83,48,7483,48,2,87l,484,8 };
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1 ] = temp;
			}
		}
	}
	for (int i = 0; i < length - 1; i++)
	{
		cout << arr[i] << "\t";
	}

	system("pause");
	return 0;
}