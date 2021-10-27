#include <iostream>
using namespace std;
struct Hero
{
	string name;
	int age;
	string sex;
};
void ageSort(Hero hero[] , int len) {
	for (int i = 0; i <len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (hero[j].age > hero[j + 1].age) {
				struct Hero temp = hero[j];
				hero[j] = hero[j + 1];
				hero[j + 1] = temp;
			}
		}
	}
}
void heroPrint(Hero hero[] , int len) {
	for (int i = 0; i <len; i++)
	{
		cout << "���䣺" << hero[i].age << "������" << hero[i].name << "�Ա�"
			<< hero[i].sex << endl;
	}
}
int main() {
	Hero hero[5] = {
		{"����" , 23 , "��"},
		{"����" , 22 , "��"},
		{"�ŷ�" , 20 , "��"},
		{"����" , 21 , "��"},
		{"����" , 19 , "Ů"}
	};
	int len = sizeof(hero) / sizeof(hero[0]);
	ageSort(hero , len);
	heroPrint(hero , len);
	system("pause");
	return 0;
}