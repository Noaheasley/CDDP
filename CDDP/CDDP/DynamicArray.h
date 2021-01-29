#pragma once

template<typename T>

class DynamicArray
{
public:
	DynamicArray() {};
	void addItem(T);
	bool removeItem(T);
	void sortItems();
	bool getItem(int index, T* item);
	int getLength();
private:
	T* m_items;
	int m_length;
};