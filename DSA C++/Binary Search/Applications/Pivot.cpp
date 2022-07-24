// find the pivot element 
// condiser that our pivot element is the minimum element in our sorted array or circular array

#include<iostream>
using namespace std;

int getPivot(int arr[],int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start < end)
    {
        if(arr[0] <= arr[mid] )
        // we use this condition because in binary search array is already sorted so minimum element is alwasy at 0th index that's why use this condition
        {
            start = mid + 1;
        }
        else{
            end = mid;
        }
        
        mid = start + (end-start)/2;
    }
    
    return start;
}
 
int main()
{

// int arr[6] = {1,2,3,4,5,6};
// normal sorted array

int arr[6] = {3,4,5,6,1,2};
// int arr[6] = {4,5,6,1,2,3};
// int arr[6] = {5,6,1,2,3,4};
// Circular sorted array 

int pivot = getPivot(arr,6);

cout << "You pivot element at index " << pivot << endl;
     
}