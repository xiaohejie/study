#include <iostream>
using namespace std;
/*
	�̳У�class ���� : �̳з�ʽ ����{}
	�ô��������ظ�����
*/
//�̳�ʵ��ҳ��
class BasePage {
public:
	void header() {
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer() {
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left() {
		cout << "Java��Python��C++...�����������б�" << endl;
	}

};

//javaҳ��
class Java : public BasePage{
public:
	
	void content(){
		cout << "Javaѧ����Ƶ" << endl;
	}
};

//Pythonҳ��
class Python : public BasePage {
public:
	
	void content() {
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

//C++ҳ��
class Cpulspuls : public BasePage {
public:
	
	void content() {
		cout << "Cpulspulsѧ����Ƶ" << endl;
	}
};
void test01() {
	cout << "Javaѧϰ��Ƶ��վ" << endl;
	Java java;
	java.header();
	java.left();
	java.content();
	java.footer();

	cout << "*****************************" << endl;

	cout << "Pythonѧϰ��Ƶ��վ" << endl;
	Python python;
	python.header();
	python.left();
	python.content();
	python.footer();
}
int main1() {
	test01();
	system("pause");
	return 0;
}