#include <iostream>
using namespace std;
int* func() {
	//����new�ؼ��֣����Խ����ݿ��ٵ�����
	int* p = new int(10);
	return p;
}
int main3() {
	/*
		���������������к�
			�ɳ���Ա�����ͷţ�������Ա���ͷţ��������н���ʱ�ɲ���ϵͳ���գ�����Ա�ֶ��ͷ�
				�Ļ��������ò�����delete��
			��C++����Ҫ����new�ڶ����п����ڴ�
	*/
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;
}