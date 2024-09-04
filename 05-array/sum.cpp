// Write a C++ program to find the sum of all elements in an array using recursion.

#include <iostream>
using namespace std;

// a recusive funtion to add the elements of arrays
int SumOfArray(int arr[], int size)
{
    if (size <= 0)
    {
        return 0;
    }
    return arr[size - 1] + SumOfArray(arr, size - 1);
}

int main()
{
    int ArrayOfNumbers[] = {2, 4, 5, 6, 10, 2, 10, 8};

    int SizeOfArray = sizeof(ArrayOfNumbers) / sizeof(ArrayOfNumbers[0]);

    cout << "Elements of the array numbers: " << endl;

    for (int i = 0; i < SizeOfArray; i++)
    {
        cout << ArrayOfNumbers[i] << " ";
    }

    cout << endl;

    cout << "Sum of the array, " << SumOfArray(ArrayOfNumbers, SizeOfArray) << endl;

    return 0;
}