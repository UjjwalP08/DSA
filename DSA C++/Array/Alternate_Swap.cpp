#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[],int size)
{
    for (int  i = 0; i < size; i+=2)
    {
    
        swap(arr[i],arr[i+1]);
    
    }
    
}
 
int main()
{

// When array Size is even
int arr[6] = {2,5,3,6,-9,10};
swapAlternate(arr,6);
printArray(arr,6);

cout << endl;

// When array size is Odd
int arry[5] = {1, 2, 3, 4, 5};
swapAlternate(arry,5);
printArray(arry,5);


     
}