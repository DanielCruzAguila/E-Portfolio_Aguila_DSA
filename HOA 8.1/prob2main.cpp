//Aguila, Daniel C.
#include <iostream>
#include "SortingAlgorithms.h"

int main()
{
    int original[] = {
        4, 34, 29, 48, 53,
        87, 12, 30, 44, 25,
        93, 67, 43, 19, 74
    };

    int size = 15;

    // Create separate arrays for each sorting algorithm
    int mergeArray[15];
    int quickArray[15];

    for (int i = 0; i < size; i++)
    {
        mergeArray[i] = original[i];
        quickArray[i] = original[i];
    }

    std::cout << "Original Array: ";
    displayArray(original, size);

    // Apply Merge Sort
    mergeSort(mergeArray, 0, size - 1);

    std::cout << "\nAfter Merge Sort: ";
    displayArray(mergeArray, size);

    // Apply Quick Sort
    quickSort(quickArray, 0, size - 1);

    std::cout << "After Quick Sort: ";
    displayArray(quickArray, size);

    std::cout << "\nTime Complexity:" << std::endl;
    std::cout << "Merge Sort: O(n log n)" << std::endl;
    std::cout << "Quick Sort: O(n log n) average case" << std::endl;
    std::cout << "Quick Sort: O(n^2) worst case" << std::endl;

    return 0;
}