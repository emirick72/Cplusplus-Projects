/*Quicksort algorithm (C++) to sort the years
  that I adopted each of my dogs in 
  ascending order.
  
  For practice only.
  
  Date: July 29, 2025  
  
  */


#include <iostream>
#include "quicksort.h"

using namespace std;


int main(){
    int years[] = {2018, 2015, 2010, 2016, 2012};
    int array_length = 5;

    string dog_names[] = {"Noodle", "Chewzers", "Hot Dog", "Piggy", "Wooly Bear"};
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

