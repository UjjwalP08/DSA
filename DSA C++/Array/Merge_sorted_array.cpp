// Merge 2 sorted array

#include <iostream>
using namespace std;

void MergeArray(int arr1[], int m, int arr2[], int n, int arr3[])
{
    // m = size of arr1
    // n = size of arr2

    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    // if arr 1 size is grater than arr 2
    while (i < m)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    // if arr 2 size is grater than arr 1

    while (j < n)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[6] = {1, 5, 6, 7, 8, 10};
    int arr2[4] = {2, 3, 6, 9};
    int arr3[10] = {0};

    MergeArray(arr1, 6, arr2, 4, arr3);

    printArray(arr3, 10);
}