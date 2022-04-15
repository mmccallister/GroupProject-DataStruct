#include <iostream>
#include "slow_new_sort.h"
using namespace std;

//Constructor
member1::member1()
{

}

void member1::swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void member1::bubblesort(int array[], int n)//buble sort sort is o(n^2)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

void member1::selectionsort(int array[], int size)//selection sort is o(n^2)
{
	for (int step = 0; step < size - 1; step++)
	{
		int min_idx = step;
		for (int i = step + 1; i < size; i++) 
		{
			if (array[i] < array[min_idx])
			{
				min_idx = i;
			}
		}
		swap(&array[min_idx], &array[step]);
	}
}

void member1::countingsort(int *array, int size)
{
	
}

void member1::print(int array[], int size)
{
	int x = 5;
	for (int i = 0; i < x; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n\n";
}