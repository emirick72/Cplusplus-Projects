/*Quicksort algorithm (C++) to sort the years
  that I adopted each of my dogs in 
  ascending order.
  
  For practice only.
  
  Date: July 29, 2025
  
  -----------------------------------------------------
  TODO: SEPARATE THE FUNCTION DECLARATIONS AND DEFINITIONS INTO DIFFERENT FILES
  AND MAKE A NEW .VSCODE TASKS JSON FILE TO COMPILE AND LINK IT ALL TOGETHER.
  
  
  */


#include <iostream>

using namespace std;

// Quicksort wrapper function declaration
void quicksort(int array[], int array_length);

// Recursion function declaration
void quicksort_recursion(int array[], int low_index, int high_index);

// Partition function declaration
int partition(int array[], int low_index, int high_index);


//-----------------------------------------------


int main(){
    int years[] = {2018, 2015, 2010, 2016, 2012};
    int array_length = 5;

    string dog_names[] = {"Nimitz", "Susie", "Clyde", "NuNu", "Walter"};
    string dog_breeds[] = {"Shih Tzu Schnauzer", "Mini Schnauzer", 
      "Mini Schnauzer/Dachshund mix", "Bichon Frise", "Wheaten Terrier"};

    // Sort the array with the quicksort function
    quicksort(years, array_length);

    cout << "Years that my family adopted our dogs:" << endl;

    // Output the sorted array
    for (int i = 0; i < array_length; i++)
    {
        cout << years[i] << " - " << "adopted " << dog_names[i] << 
        " (" << dog_breeds[i] << ")" << endl;
    }
    cout << endl;

    return 0;
}

//-----------------------------------------------

// Quicksort wrapper function definition
void quicksort(int array[], int array_length)
{
    quicksort_recursion(array, 0, array_length - 1);
}

// Recursion function definition
void quicksort_recursion(int array[], int low_index, int high_index)
{
    if (low_index < high_index)
    {
        int pivot_index = partition(array, low_index, high_index);
        quicksort_recursion(array, low_index, pivot_index - 1);
        quicksort_recursion(array, pivot_index + 1, high_index);
    }
}

// Partition function definition
int partition(int array[], int low_index, int high_index)
{
    // do something here lol
    int pivot_value = array[high_index];
    int i = low_index;
    for (int j = low_index; j < high_index; j++)
    {
        if (array[j] <= pivot_value)
        {
            swap(array[i], array[j]);
            i++;
        }
    }
    swap(array[i], array[high_index]);

    return i;
}