#include <iostream>
using namespace std;
/*
	����-��������
		��װһ������ĺ����������Բ�ͬ���������ݽ�������
		��������С���������㷨ʹ��ѡ������

*/
template<typename T>//typenameҲ�����滻��class��������
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
				max = j;//�������ֵ
			} 
		}
		if (max != i)
		{
			mySwap<T>(arr[i], arr[max]);
		}

	}
}

//�ṩ��ӡ�����ģ��
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