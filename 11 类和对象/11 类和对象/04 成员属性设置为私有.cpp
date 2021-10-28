#include <iostream>
using namespace std;
/*
	成员属性设置为私有：
		优点：将所有成员属性设置为私有，可以自己控制读写权限；
			  对于写权限，我们可以检测数据的有效性
*/
class Person {
public:
	//设置姓名
	void setName(string name) {
		m_Name = name;
	}
	//获取姓名
	string getName() {
		return m_Name;
	}
private:
	string m_Name = "张三";//修改权限：可读可写
	int m_Age;//只读
	string m_Lover;//只写
};
int main4() {
	Person p;
	p.setName("李四");
	string name = p.getName();
	cout << name << endl;
	system("pause");
	return 0;
}