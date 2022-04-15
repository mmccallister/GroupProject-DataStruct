#pragma once
#ifndef slow_new_sort_h
#define slow_new_sort_h
#include <iostream>>

class member1
{
public:
	member1();
	void swap(int* a, int* b);
	void bubblesort(int array[], int n);//slow o(n^2) sort
	void selectionsort(int array[], int size);//slow o(n^2) sort
	void countingsort(int* array, int size);
	void print(int array[], int size);//display the array
};

#endif 