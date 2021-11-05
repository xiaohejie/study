#include <iostream>
#include <fstream>
using namespace std;
/*
	写文件：
*/
void test01() {
	//1、包含头文件（fstream）

	//2、创建流对象
	ofstream ofs;

	//3、指定打开方式
	ofs.open("test.txt", ios::out);

	//写内容
	ofs << "姓名：何捷" << endl;
	ofs << "性别：男" << endl;
	ofs << "爱好：女" << endl;

	//关闭文件
	ofs.close(); 
}
int main1() {
	test01();
	system("pause");
	return 0;
}