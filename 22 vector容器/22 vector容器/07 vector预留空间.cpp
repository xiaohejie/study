#include <iostream>
using namespace std;
#include <vector>
/*
	vectorԤ���ռ䣺
		`reserve(int len);`//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�
*/
void test07() {
	vector<int>v;
	//����reserveԤ���ռ�:�Ͳ��������֪���¿ռ�Ĳ���
	v.reserve(10000);
	int num = 0;		//ͳ�ƿ����ڴ�Ĵ���
	int* p = NULL;

	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}
int main() {
	test07();
	system("pause");
	return 0;
}