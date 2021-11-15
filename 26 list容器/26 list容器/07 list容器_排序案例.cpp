#include<iostream>
using namespace std;
#include<list>
class Person {
public:
	Person(string name, int age, int height) {
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};

void printPerson(list<Person>&l) {
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++) {
		cout << "姓名：" << (*it).m_Name << "  年龄：" << it->m_Age <<
			"  身高：" << it->m_Height << endl;;
	}
}
//指定排序规则
bool comparePerson(Person &p1, Person &p2) {
	//按照年龄进行升序，身高进行降序
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
	
}
void test07() {
	list<Person>l;
	Person p1("张三", 23, 190);
	Person p2("李四", 33, 186);
	Person p3("王五", 13, 199);
	Person p4("赵柳", 23, 165);
	Person p5("王二", 33, 196);
	Person p6("陆毅", 13, 180);

	//将数据插入容器
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);

	cout << "排序前：" << endl;
	printPerson(l);

	l.sort(comparePerson);
	cout << "排序后：" << endl;
	printPerson(l);
}
int main() {
	test07();
	system("pause");
	return 0;
}