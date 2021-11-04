#include <iostream>
using namespace std;
/*
	分别利用普通写法和多态技术实现计算器类：

*/
//普通写法：
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

//利用多态实现计算器
//实现计算器抽象类
class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}

	int n_Num1;
	int n_Num2;
};
//加法计算器类
class AddCalculator :public AbstractCalculator {
public:
	virtual int getResult() {
		return n_Num1 + n_Num2;
	}
};
//减法计算器类
class SubCalculator :public AbstractCalculator {
public:
	virtual int getResult() {
		return n_Num1 - n_Num2;
	}
};
void test02_1() {
	//多态使用条件
	//父类指针或者引用指向子类对象
	AbstractCalculator* abs = new AddCalculator();
	abs->n_Num1 = 20;
	abs->n_Num2 = 30;
	int res = abs->getResult();
	cout << res << endl;

	//堆区数据用完后记得销毁
	delete abs;

	//减法运算
	abs = new SubCalculator();
	abs->n_Num1 = 20;
	abs->n_Num2 = 30;
	res = abs->getResult();
	cout << res << endl;

	//堆区数据用完后记得销毁
	delete abs;

}
int main2() {
	test02_1();
	system("pause");
	return 0;
}