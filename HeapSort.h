//
//  HeapSort.h
//  Group Project - Heap Sort
//
//  Created by ramzy on 4/9/22.
//  Copyright © 2022 ramzy. All rights reserved.
//

#ifndef HeapSort_h
#define HeapSort_h
#include <vector>


using namespace std;

class MemberTwo
{
public:
    //this is from the internet
    MemberTwo();
    void heapify(int arr[], int n, int i);
    void heapSort(int arr[], int n);
    void swap(int* a, int* b);
    int partition(int arr[], int start, int end);
    void quickSort(int arr[], int start, int end);
    void printArray(int arr[], int n);
    
    //This is a heap alogrithHeapSortvector, from the Heap slides
    /*make_heap() {};
     void push_heap(int element);
     HeapSortortortop_heap() ;
    void peek_heap();
    sort_heap();*/
    
//private:
   /* vector<int> v; //defines vector
    percolate_down();
    percolate_up();*/
    
};


#endif /* HeapSort_h */
