#include <iostream>
using namespace std;
/*
	string�ַ�����ƴ�ӣ�
		* string& operator+=(const char* str);`			 //����+=������
		* `string& operator+=(const char c);`            //����+=������
		* `string& operator+=(const string& str);`       //����+=������
		* `string& append(const char *s); `              //���ַ���s���ӵ���ǰ�ַ�����β
		* `string& append(const char *s, int n);`        //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
		* `string& append(const string &s);`             //ͬoperator+=(const string& str)
		* `string& append(const string &s, int pos, int n);`//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
*/
//�ַ���ƴ��
void test06()
{
	string str1 = "��";

	str1 += "������Ϸ";

	cout << "str1 = " << str1 << endl;

	str1 += ':';

	cout << "str1 = " << str1 << endl;

	string str2 = "LOL DNF";

	str1 += str2;

	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	str3.append("game abcde", 4);
	//str3.append(str2);
	str3.append(str2, 3, 4); // ���±�4λ�ÿ�ʼ ����ȡ3���ַ���ƴ�ӵ��ַ���ĩβ
	cout << "str3 = " << str3 << endl;
}
int main6() {

	test06();

	system("pause");

	return 0;
}