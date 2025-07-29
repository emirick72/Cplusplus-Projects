/*Quicksort Algorithm in C++
  Example taken from YouTube*/

#include <iostream>
#include <utility>
#include <cstdlib>
#include <ctime>

using namespace std;

// Recursive function for algorithm
void quicksort(int array[], int length);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

int main()
{
    int a[] = {10,11,23,44,8,15,3,9,12,45,56,45,45};
    int length = 13;

    // Sort the array
    quicksort(a, length);

    // Output the array elements
    for (int i = 0; i < length; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl << endl;

    return 0;
}

// Implement quicksort wrapper function
void quicksort(int array[], int length)
{
    srand(time(NULL));
    quicksort_recursion(array, 0, length - 1);
}

// Implement quicksort recursion function
void quicksort_recursion(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(array, low, high);
        quicksort_recursion(array, low, pivot_index - 1);
        quicksort_recursion(array, pivot_index + 1, high);
    }
}

// Implement partition function
int partition(int array[], int low, int high)
{
    // low to high int range
    // low + 0 ... high-low
    int pivot_index = low + (rand() % (high - low + 1));

    if (pivot_index != high)
    {
        swap(array[pivot_index], array[high]);
    }

    int pivot_value = array[high];
    int i = low;
    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot_value)
        {
            swap(array[i], array[j]);
            i++;
        }
    }
    swap(array[i], array[high]);

    return i;
}