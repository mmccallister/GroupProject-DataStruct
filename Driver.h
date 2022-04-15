#pragma once
/*---Driver.h---
  Header file defines the data types of the driver that creates a randomized array of 1000 and also sets the array back
  to the original randomized array
  
  Basic Operations:
  randomArray: Creates a random array of 1000
  origArray: sets the array back to random array of 1000
  
  Created by: Matthew McCallister
*/
#ifndef Driver_h
#define Driver_h
#include <iostream>
#include "Driver.h"
#include "slow_new_sort.h"
#include "HeapSort.h"
#include <ctime>
#include <chrono>

class Driver
{
public:

	int* randomArray(int arr[], int size);
	void originalArray(int arr[], int arr2[], int size);
};

#endif