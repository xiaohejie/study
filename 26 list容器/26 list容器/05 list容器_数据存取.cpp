#include <iostream>
using namespace std;
#include <list>
/*
	���ݴ�ȡ��
		* `front();`        //���ص�һ��Ԫ�ء�
		* `back();`         //�������һ��Ԫ�ء�
*/
//���ݴ�ȡ
void test05()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);


	//cout << L1.at(0) << endl;//���� ��֧��at��������
	//cout << L1[0] << endl; //����  ��֧��[]��ʽ��������
	//��Ϊlist�ı������������������������Կռ�洢���ݣ��������ǲ�֧������������ݵ�	
	cout << "��һ��Ԫ��Ϊ�� " << L1.front() << endl;
	cout << "���һ��Ԫ��Ϊ�� " << L1.back() << endl;

	//list�����ĵ�������˫�����������֧���������
	list<int>::iterator it = L1.begin();
	//it = it + 1;//���󣬲�������Ծ���ʣ���ʹ��+1
}

int main5() {

	test05();

	system("pause");

	return 0;
}
