#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
        bool check = false;
    for (int i = 1; i < size; i++)
        // we can use i = 0 to i  = n-1
        // this for loop for round
    for (int j = 0; j < size - i; j++)
    {
        // this for loop for comparision
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
            check = true;
        }

        if (check == false)
            break;
        // This condtio for if array is already sorted
        
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[6] = {6, 5, 4, 3, 2, 1};

    BubbleSort(arr, 6);

    printArray(arr, 6);
}