#include <iostream>
using namespace std;
/*
	�ַ������Һ��滻��	
		* `int find(const string& str, int pos = 0) const;`              //����str��һ�γ���λ��,��pos��ʼ����
		* `int find(const char* s, int pos = 0) const; `                     //����s��һ�γ���λ��,��pos��ʼ����
		* `int find(const char* s, int pos, int n) const; `               //��posλ�ò���s��ǰn���ַ���һ��λ��
		* `int find(const char c, int pos = 0) const; `                       //�����ַ�c��һ�γ���λ��
		* `int rfind(const string& str, int pos = npos) const;`      //����str���һ��λ��,��pos��ʼ����
		* `int rfind(const char* s, int pos = npos) const;`              //����s���һ�γ���λ��,��pos��ʼ����
		* `int rfind(const char* s, int pos, int n) const;`              //��pos����s��ǰn���ַ����һ��λ��
		* `int rfind(const char c, int pos = 0) const;  `                      //�����ַ�c���һ�γ���λ��
		* `string& replace(int pos, int n, const string& str); `       //�滻��pos��ʼn���ַ�Ϊ�ַ���str
		* `string& replace(int pos, int n,const char* s); `                 //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
*/

//���Һ��滻
void test07()
{
	//����
	string str1 = "abcdefgde";

	int pos = str1.find("de");

	if (pos == -1)
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "pos = " << pos << endl;
	}


	pos = str1.rfind("de");

	cout << "pos = " << pos << endl;

}

void test07_1()
{
	//�滻
	string str1 = "abcdefgde";
	str1.replace(1, 3, "1111");

	cout << "str1 = " << str1 << endl;
}

int main() {

	test07();
	test07_1();

	system("pause");

	return 0;
}