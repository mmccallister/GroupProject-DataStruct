#include <iostream>
#include "Driver.h"
#include "slow_new_sort.h"
#include "HeapSort.h"
#include <ctime>
#include <chrono>

using namespace std;

int* Driver::randomArray(int arr[], int size)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 9999 + 1;
    }

    return arr;
}

void Driver::originalArray(int arr[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i];
    }
}