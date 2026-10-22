//Aguila, Daniel C. CPE21S1
#include <iostream>
#include "SortingAlgorithms.h"

int main()
{
    int arr[] = {8, 3, 7, 4, 9, 2, 6};
    int size = 7;

    std::cout << "Original Array: ";
    displayArray(arr, size);

    int pivot = 7;

    int leftSublist[7];
    int rightSublist[7];

    int leftSize = 0;
    int rightSize = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < pivot)
        {
            leftSublist[leftSize] = arr[i];
            leftSize++;
        }
        else if (arr[i] > pivot)
        {
            rightSublist[rightSize] = arr[i];
            rightSize++;
        }
    }

    std::cout << "\nPivot: " << pivot << std::endl;

    std::cout << "Left Sublist before sorting: ";
    displayArray(leftSublist, leftSize);

    std::cout << "Right Sublist before sorting: ";
    displayArray(rightSublist, rightSize);

    insertionSort(leftSublist, leftSize);
    insertionSort(rightSublist, rightSize);

    std::cout << "\nLeft Sublist after Insertion Sort: ";
    displayArray(leftSublist, leftSize);

    std::cout << "Right Sublist after Insertion Sort: ";
    displayArray(rightSublist, rightSize);

    std::cout << "\nFinal Sorted Array: ";

    for (int i = 0; i < leftSize; i++)
    {
        std::cout << leftSublist[i] << " ";
    }

    std::cout << pivot << " ";

    for (int i = 0; i < rightSize; i++)
    {
        std::cout << rightSublist[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}