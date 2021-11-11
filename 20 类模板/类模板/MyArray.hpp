#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray {
public:
	//�вι���
	MyArray(int capacity) {
		//cout << "MyArray���вι������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	//��������
	MyArray(const MyArray& arr) {
		//cout << "MyArray�Ŀ����������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;
		//����������������п���һ��ռ䣬��ָ��ά����
		this->pAddress = new T[this->m_Capacity];
		//��array�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operator= Ҳ������ֹǳ����������
	MyArray& operator=(const MyArray& arr) {
		//cout << "MyArray��operator=����" << endl;
		//���ж�ԭ�������Ƿ������ݣ�������Ƚ����ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//β�巨
	void PushBack(const T& val) {
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			cout << "����������С�������޷��ٽ��в��룡" << endl;
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}
	//βɾ��
	void PopBack() {
		if (this->m_Size == 0)
		{
			cout << "����Ϊ�գ��޷�����ɾ����" << endl;
			return;
		}
		this->m_Size--;
	}

	//ͨ���±�ķ�ʽ���������е�Ԫ��(�����������Ҫ��Ϊ��ֵ���ڵĻ�����Ҫʹ������&)
	T& operator[](int index) {
		return this->pAddress[index];
	}

	//�������������
	int getCapacity() {
		return this->m_Capacity;
	}
	//��������Ĵ�С
	int getSize() {
		return this->m_Size;
	}

	//��������
	~MyArray() {
		//cout << "MyArray����������" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	T* pAddress;		//ָ��ָ��������ٵ���ʵ����
	int m_Capacity;		//��������
	int m_Size;			//�����С

};