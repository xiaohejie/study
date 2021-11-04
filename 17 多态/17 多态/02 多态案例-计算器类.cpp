#include <iostream>
using namespace std;
/*
	�ֱ�������ͨд���Ͷ�̬����ʵ�ּ������ࣺ

*/
//��ͨд����
class Calculator {
public:
	int getResult(string oper) {
		if (oper == "+")
		{
			return n_Num1 + n_Num2;
		}
		else if(oper == "-")
		{
			return n_Num1 - n_Num2;
		}
		else if (oper == "*")
		{
			return n_Num1 * n_Num2;

		}
	}
	int n_Num1;
	int n_Num2;
};
void test02() {
	Calculator c;
	c.n_Num1 = 10;
	c.n_Num2 = 20;
	int res = c.getResult("*");
	cout << res << endl;
}

//���ö�̬ʵ�ּ�����
//ʵ�ּ�����������
class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}

	int n_Num1;
	int n_Num2;
};
//�ӷ���������
class AddCalculator :public AbstractCalculator {
public:
	virtual int getResult() {
		return n_Num1 + n_Num2;
	}
};
//������������
class SubCalculator :public AbstractCalculator {
public:
	virtual int getResult() {
		return n_Num1 - n_Num2;
	}
};
void test02_1() {
	//��̬ʹ������
	//����ָ���������ָ���������
	AbstractCalculator* abs = new AddCalculator();
	abs->n_Num1 = 20;
	abs->n_Num2 = 30;
	int res = abs->getResult();
	cout << res << endl;

	//�������������ǵ�����
	delete abs;

	//��������
	abs = new SubCalculator();
	abs->n_Num1 = 20;
	abs->n_Num2 = 30;
	res = abs->getResult();
	cout << res << endl;

	//�������������ǵ�����
	delete abs;

}
int main2() {
	test02_1();
	system("pause");
	return 0;
}