#include <iostream>
using namespace std;
#include <map>
/*
	- `insert(elem);`           //�������в���Ԫ�ء�
	- `clear();`                    //�������Ԫ��
	- `erase(pos);`              //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
	- `erase(beg, end);`    //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
	- `erase(key);`            //ɾ��������ֵΪkey��Ԫ�ء�
*/
void printMap03(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test03()
{
	//����
	map<int, int> m;
	//��һ�ֲ��뷽ʽ
	m.insert(pair<int, int>(1, 10));
	//�ڶ��ֲ��뷽ʽ
	m.insert(make_pair(2, 20));
	//�����ֲ��뷽ʽ
	m.insert(map<int, int>::value_type(3, 30));
	//�����ֲ��뷽ʽ(������ʹ��[]���в��룬��������[]����value)
	m[4] = 40;
	printMap03(m);

	//ɾ��
	m.erase(m.begin());
	printMap03(m);

	m.erase(3);
	printMap03(m);

	//���
	m.erase(m.begin(), m.end());
	m.clear();
	printMap03(m);
}

int main3() {

	test03();

	system("pause");

	return 0;
}