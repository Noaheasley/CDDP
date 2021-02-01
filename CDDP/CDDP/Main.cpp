#include "DynamicArray.h"
#include "ShopKeep.h"

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int arr[], int num)
{
	int i;
	int j;
	bool swapped;
	for (i = 0; i < num - 1; i++)
	{
		swapped = false;
		for (j = 0; j < num - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
		{
			break;
		}
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

template <typename T>
T add(T lhs, T rhs)
{
	return lhs + rhs;
}

int main()
{
	DynamicArray<int> test = DynamicArray<int>();
	test.addItem(1);
	test.addItem(4);
	test.addItem(2);
	test.addItem(3);
	test.addItem(5);
	test.sortItems();
	test.print();
	system("pause");
}