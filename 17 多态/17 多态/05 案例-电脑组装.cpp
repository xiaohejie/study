#include <iostream>
using namespace std;
/*
	������װ����
*/
//CPU��
class Cpu {
public:
	//����ļ��㺯��
	virtual void calculator() = 0;
};
//�Կ���
class VideoCard {
public:
	//�������ʾ����
	virtual void display() = 0;
};
//�ڴ���
class Memory {
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};
//������
class Computer {
public:
	Computer(Cpu* cpu , VideoCard* vc , Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//�ṩ�����ĺ���
	void doWork(){
		m_cpu->calculator();
		m_vc->display();
		m_mem->storage();
	};
	//�ṩ�����������ͷ������������
	~Computer() {
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
	}

private:
	Cpu* m_cpu;		//Cpu���ָ��
	VideoCard* m_vc;	//�Կ����ָ��
	Memory* m_mem;	//�ڴ������ָ��
};

//���峧��
//Intel����
class IntelCPU :public Cpu
{
public:
	virtual void calculator()
	{
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};

//Lenovo����
class LenovoCPU :public Cpu
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};


//���峧��
//class Intel :public Cpu, public VideoCard, public Memory {
//	virtual void calculator() {
//		cout << "Ӣ�ض�������CPU" << endl;
//	}
//	virtual void display() {
//		cout << "Ӣ�ض��������Կ�" << endl;
//	}
//	virtual void storage() {
//		cout << "Ӣ�ض��������ڴ���" << endl;
//	}
//};
//class Lenove :public Cpu, public VideoCard, public Memory {
//	virtual void calculator() {
//		cout << "����������CPU" << endl;
//	}
//	virtual void display() {
//		cout << "�����������Կ�" << endl;
//	}
//	virtual void storage() {
//		cout << "�����������ڴ���" << endl;
//	}
//};

void test05() {
	//�����������
	Cpu* cpuIntel = new IntelCPU;
	VideoCard* vcIntel = new IntelVideoCard;
	Memory* memIntel = new IntelMemory;

	//��������
	Computer* c1 = new Computer(cpuIntel, vcIntel, memIntel);
	c1->doWork();
	delete c1;
}

int main() {
	test05();
	system("pause");
	return 0;
}

//#include<iostream>
//using namespace std;
//
////����CPU��
//class CPU
//{
//public:
//	//����ļ��㺯��
//	virtual void calculate() = 0;
//};
//
////�����Կ���
//class VideoCard
//{
//public:
//	//�������ʾ����
//	virtual void display() = 0;
//};
//
////�����ڴ�����
//class Memory
//{
//public:
//	//����Ĵ洢����
//	virtual void storage() = 0;
//};
//
////������
//class Computer
//{
//public:
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//
//	//�ṩ�����ĺ���
//	void work()
//	{
//		//������������������ýӿ�
//		m_cpu->calculate();
//
//		m_vc->display();
//
//		m_mem->storage();
//	}
//
//	//�ṩ�������� �ͷ�3���������
//	~Computer()
//	{
//
//		//�ͷ�CPU���
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//
//		//�ͷ��Կ����
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//
//		//�ͷ��ڴ������
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//
//private:
//
//	CPU* m_cpu; //CPU�����ָ��
//	VideoCard* m_vc; //�Կ����ָ��
//	Memory* m_mem; //�ڴ������ָ��
//};
//
////���峧��
////Intel����
//class IntelCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
//	}
//};
//
//class IntelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel���ڴ�����ʼ�洢�ˣ�" << endl;
//	}
//};
//
////Lenovo����
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
//	}
//};
//
//
//void test05()
//{
//	//��һ̨�������
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMem = new IntelMemory;
//
//	cout << "��һ̨���Կ�ʼ������" << endl;
//	//������һ̨����
//	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;
//
//	cout << "-----------------------" << endl;
//	cout << "�ڶ�̨���Կ�ʼ������" << endl;
//	//�ڶ�̨������װ
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);;
//	computer2->work();
//	delete computer2;
//
//	cout << "-----------------------" << endl;
//	cout << "����̨���Կ�ʼ������" << endl;
//	//����̨������װ
//	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);;
//	computer3->work();
//	delete computer3;
//
//}
//int main() {
//	test05();
//	system("pause");
//	return 0;
//}