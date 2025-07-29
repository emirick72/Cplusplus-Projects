/*Quicksort algorithm (C++) to sort the years
  that I adopted each of my dogs in 
  ascending order.
  
  For practice only.
  
  July 29, 2025*/


#include <iostream>
#include "quicksort.h"

using namespace std;

// Recursive functions for the algorithm
// call functions here
// declare functions in another class/.h file
// and link it in this file


int main(){
    int years[] = {2018, 2015, 2010, 2016, 2012};
    int array_length = 5;

    // Sort the array with the quicksort function
    quicksort(years, array_length);

    // Output the sorted array
    for (int i = 0; i < array_length; i++)
    {
        cout << years[i] << " - " << "dog name";
    }
    cout << endl << endl;
    cout << "IT WORKS YAY" << endl;

    return 0;
}