#include <iostream>
using namespace std;
void exercise(int* num , int len) {
	int start = 0;
	int end = len - 1;
	for (int i = 0; i < len; i++)
	{
		if (start <= end) {
			/*int temp = num[start];
			num[start] = num[end];
			num[end] = temp;*/
			swap(num[start] , num[end]);
			start++;
			end--;
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << num[i] << "  ";
	}
	cout << endl;
}

void exercise2(int* num , int start , int end) {
	if (start <= end) {
		/*int temp = num[start];
		num[start] = num[end];
		num[end] = temp;*/
		swap(num[start], num[end]);
		exercise2(num, start+1, end-1);
	}
	
}
void test100() {
	int num[] = { 1,5,3,85,52,5,3,8,41,28,6,2,4,6,2,7,64,41,8 };
	int len = sizeof(num) / sizeof(num[0]);
	exercise(num, len);
	exercise2(num, 0, len - 1);
	for (int i = 0; i < len; i++)
	{
		cout << num[i] << "  ";
	}
	cout << endl;
}
int main() {
	test100();
	system("pause");
	return 0;
}