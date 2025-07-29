    #ifndef QUICKSORT_H
    #define QUICKSORT_H

    // Quicksort wrapper function declaration
    void quicksort(int array[], int array_length);

    // Recursion function declaration
    void quicksort_recursion(int array[], int low_index, int high_index);

    // Partition function declaration
    int partition(int array[], int low_index, int high_index);

    #endif // QUICKSORT_H