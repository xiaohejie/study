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
		cout << "ÄêÁä£º" << hero[i].age << "ÐÕÃû£º" << hero[i].name << "ÐÔ±ð£º"
			<< hero[i].sex << endl;
	}
}
int main() {
	Hero hero[5] = {
		{"Áõ±¸" , 23 , "ÄÐ"},
		{"¹ØÓð" , 22 , "ÄÐ"},
		{"ÕÅ·É" , 20 , "ÄÐ"},
		{"ÕÔÔÆ" , 21 , "ÄÐ"},
		{"õõ²õ" , 19 , "Å®"}
	};
	int len = sizeof(hero) / sizeof(hero[0]);
	ageSort(hero , len);
	heroPrint(hero , len);
	system("pause");
	return 0;
}