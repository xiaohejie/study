#include <iostream>
#include <functional>
using namespace std;
/*
	�����º�����
		* `template<class T> T plus<T>`                //�ӷ��º���
		* `template<class T> T minus<T>`              //�����º���
		* `template<class T> T multiplies<T>`    //�˷��º���
		* `template<class T> T divides<T>`         //�����º���
		* `template<class T> T modulus<T>`         //ȡģ�º���
		* `template<class T> T negate<T>`           //ȡ���º���
*/
void test04() {
	negate<int>n;
	plus<int>p;

	cout << n(50) << endl;
	cout << p(10, 20) << endl;
}
int main4() {
	test04();
	system("pause");
	return 0;
}