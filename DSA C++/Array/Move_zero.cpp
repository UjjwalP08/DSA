// Move all the zeor at right side of array

#include<iostream>
using namespace std;

void MoveZero(int arr[],int size)
{
    int non_zero = 0;

    for(int i = 0;i<size;i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[non_zero]);
            non_zero++;
        }
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

    int arr[6] = {1, 0, 0, 0, 8, 0};
   
    MoveZero(arr,6);

    printArray(arr, 6);
}