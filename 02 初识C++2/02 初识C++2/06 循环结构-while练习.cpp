#include <iostream>
using namespace std;
int main6() {
	//�������������ӣ����õ�ǰϵͳʱ���������������ֹÿ�ε��������һ��
	srand((unsigned int)time(NULL));

	int num = rand() % 100;
	//cout << num << endl;
	int a = 0;
	bool isFlag = true;
	while (isFlag) {
		cin >> a;
		if (a != num) {
			cout << "�´��ˣ������²£�" << endl;
			if (a > num) {
				cout << "���ˣ�" << endl;
			}
			else 
			{
				cout << "С�ˣ�" << endl;
			}
		}
		else
		{
			cout << "��ϲ�㣬�¶��ˣ�����" << endl;
			isFlag = false;
		}
	
	}
	system("pause");
	return 0;
}