#include <iostream>
using namespace std;
/*
	案例-数组排序：
		封装一个排序的函数，用来对不同的类型数据进行排序
		排序规则从小到大，排序算法使用选择排序

*/
template<typename T>//typename也可以替换成class（无区别）
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void mySort(T arr[] , int len) {
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[max] < arr[j]) {
				max = j;//更新最大值
			} 
		}
		if (max != i)
		{
			mySwap<T>(arr[i], arr[max]);
		}

	}
}

//提供打印数组的模板
template<class T>
void myPrint(T arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
void test3() {
	char charArr[] = "bdauiwbfqwgnadw";
	int len = sizeof(charArr) / sizeof(charArr[0]);
	mySort(charArr, len);

	myPrint(charArr, len);
}
void test3_1() {
	int intArr[] = { 0,1,52,45,1,15,4,5,78,6,8,4,6,78,1 };
	int len = sizeof(intArr) / sizeof(intArr[0]);
	mySort(intArr, len);

	myPrint(intArr, len);
}
int main3() {
	test3();
	test3_1();
	system("pause");
	return 0;
}