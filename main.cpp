#include <iostream>
#include "Driver.h"
#include "slow_new_sort.h"
#include "HeapSort.h"
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    //Integrates each members functions
    Driver MemberThree;
    member1 MemberOne;
    MemberTwo memberTwo;

    //Creates Array for sort tests
    const int size = 1000;
    int randArray[size];
    int origArray[size];
    MemberThree.randomArray(randArray, size);
    MemberThree.originalArray(randArray, origArray, size);

    //Shows original unsorted array
    cout << "Original Unsorted Array: " << randArray[0] << " " << randArray[1] << " " << randArray[2] << " " << randArray[3] << " " << randArray[4] << endl;
    cout << endl << endl;

    //Member One
    //Bubble Sort:
    //auto start = high_resolution_clock::now();
    MemberOne.bubblesort(randArray, size);
   // auto stop = high_resolution_clock::now();
    //auto duration = duration_cast<microseconds>(stop - start);
    //cout << duration.count() << endl;
    cout << "Bubble Sort: " << endl;
    MemberOne.print(randArray, size);
    cout << "\n\n";
    MemberThree.originalArray(origArray, randArray, size);

    //Selection Sort:
    MemberOne.selectionsort(randArray, size);
    cout << "Selection Sort: " << endl;
    MemberOne.print(randArray, size);
    cout << "\n\n";
    MemberThree.originalArray(origArray, randArray, size);

    //Count sort:
    MemberOne.countingsort(randArray, size);
    cout << "Counting Sort: " << endl;
    MemberOne.print(randArray, size);
    cout << "\n\n";
    MemberThree.originalArray(origArray, randArray, size);


    //Member Two Sorts
    //Heap Sort:
    memberTwo.heapSort(randArray, size);
    cout << "Heap Sort: " << endl;
    memberTwo.printArray(randArray, size);
    cout << "\n\n";
    MemberThree.originalArray(origArray, randArray, size);

    //Quick Sort
    memberTwo.quickSort(randArray, size);
    cout << "Quick Sort: " << endl;
    memberTwo.printArray(randArray, size);
    cout << "\n\n";
    MemberThree.originalArray(origArray, randArray, size);
    




    return 0;
}