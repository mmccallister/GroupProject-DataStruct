//
//  main.cpp
//  Group Project - Heap Sort
//
//  Created by ramzy on 4/9/22.
//  Copyright © 2022 ramzy. All rights reserved.
//

#include <stdio.h>
#include "HeapSort.h"
#include <iostream>
#include <vector>

using namespace std;

MemberTwo::MemberTwo()
{

}

void MemberTwo::swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void MemberTwo::heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    
    //conditions that determine if left is less than n and the first number of the array is greater than the largest number in the array.
    if (l < n && arr[l] > arr[largest])
        largest = l;
    
    //conditions that determine if right is less than n and the first number of the array is greater than the largest number in the array.
    if (r < n && arr[r] > arr[largest])
           largest = r;
    
    //conditions that determine if largest value is not equal to int i.
    if (largest != i) {
        swap(&arr[i], &arr[largest]); //swap the values in the array and the largest value in the array, respectively.
        
        heapify(arr, n, largest);
    }
    
}

void MemberTwo::heapSort(int arr[], int n) //heapSort function
{
    //loops through
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    
    for (int i = n - 1; i > 0; i--)
    {
        swap(&arr[0], &arr[i]);
        
        heapify(arr, i, 0);
    }
}

int MemberTwo::partition(int arr[], int start, int end)
{
    //Pivot index
    int pivot = arr[start];

    int count = 0;

    //loops through numbers from start to the end
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(&arr[pivotIndex], &arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex) {

        //if the start is less than or equal to pivot, increment the start numbers
        while (arr[i] <= pivot) {
            i++;
        }
        //if the end is greater than pivot, decrement the start numbers
        while (arr[j] > pivot) {
            j--;
        }

        //if the start is less than pivot and end greater than pivot, swap array starts increment and array end decrement
        if (i < pivotIndex && j > pivotIndex) {
            swap(&arr[i++], &arr[j--]);
        }
    }


    return pivotIndex; // returns pivot
}

void MemberTwo::quickSort(int arr[], int start, int end)
{
    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}

void MemberTwo::printArray(int arr[], int n)
{
    //loops through the array in the print fucntion
    int x = 5;
    for (int i = 0; i <= x; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}