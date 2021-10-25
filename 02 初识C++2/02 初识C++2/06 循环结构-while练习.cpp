#include <iostream>
using namespace std;
int main6() {
	//添加随机数的种子，利用当前系统时间生成随机数，防止每次的随机数都一样
	srand((unsigned int)time(NULL));

	int num = rand() % 100;
	//cout << num << endl;
	int a = 0;
	bool isFlag = true;
	while (isFlag) {
		cin >> a;
		if (a != num) {
			cout << "猜错了，请重新猜！" << endl;
			if (a > num) {
				cout << "大了！" << endl;
			}
			else 
			{
				cout << "小了！" << endl;
			}
		}
		else
		{
			cout << "恭喜你，猜对了！！！" << endl;
			isFlag = false;
		}
	
	}
	system("pause");
	return 0;
}