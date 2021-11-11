#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray {
public:
	//有参构造
	MyArray(int capacity) {
		//cout << "MyArray的有参构造调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	//拷贝构造
	MyArray(const MyArray& arr) {
		//cout << "MyArray的拷贝构造调用" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;
		//深拷贝，重新在数组中开辟一块空间，让指针维护他
		this->pAddress = new T[this->m_Capacity];
		//将array中的数据都拷贝过来
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operator= 也是来防止浅拷贝的问题
	MyArray& operator=(const MyArray& arr) {
		//cout << "MyArray的operator=调用" << endl;
		//先判断原来堆区是否有数据，如果有先进行释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//尾插法
	void PushBack(const T& val) {
		//判断容量是否等于大小
		if (this->m_Capacity == this->m_Size)
		{
			cout << "数组容量大小已满，无法再进行插入！" << endl;
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}
	//尾删法
	void PopBack() {
		if (this->m_Size == 0)
		{
			cout << "数组为空，无法进行删除！" << endl;
			return;
		}
		this->m_Size--;
	}

	//通过下标的方式访问数组中的元素(如果函数调用要作为左值存在的话，需要使用引用&)
	T& operator[](int index) {
		return this->pAddress[index];
	}

	//返回数组的容量
	int getCapacity() {
		return this->m_Capacity;
	}
	//返回数组的大小
	int getSize() {
		return this->m_Size;
	}

	//析构函数
	~MyArray() {
		//cout << "MyArray的析构调用" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	T* pAddress;		//指针指向堆区开辟的真实数组
	int m_Capacity;		//数组容量
	int m_Size;			//数组大小

};