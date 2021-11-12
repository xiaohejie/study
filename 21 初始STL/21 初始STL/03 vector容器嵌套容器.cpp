#include <iostream>
using namespace std;
#include <vector>
/*
	vector中容器嵌套容器：
		
*/
void test03() {
	vector<vector<int>>v;

	//创建小容器
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	//向小容器中添加数据
	v1.push_back(1);
	v1.push_back(11);
	v1.push_back(111);
	v1.push_back(1111);

	v2.push_back(2);
	v2.push_back(22);
	v2.push_back(222);
	v2.push_back(2222);

	v3.push_back(3);
	v3.push_back(33);
	v3.push_back(333);
	v3.push_back(3333);

	v4.push_back(4);
	v4.push_back(44);
	v4.push_back(444);
	v4.push_back(4444);

	//将小容器插入到大容器
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//通过大容器遍历所有的数据
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
		//(*it)就是一个容器：vector<int>
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
			cout << *vit << "  ";
		}
		cout << endl;
	}
}
int main3() {
	test03();
	system("pause");
	return 0;
}