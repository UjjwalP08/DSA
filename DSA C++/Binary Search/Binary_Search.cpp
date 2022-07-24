#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int element)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    // here we write this because we if the value is out of int range still we get our answer

    while (start<=end)
    {
        if(arr[mid] == element)
        {
            return mid;
        }

        if(element < arr[mid])
        {
            end = mid - 1;
        }
        else
        // arr[mid] < element
        {
            start = mid + 1;
        }

        mid = start + (end - start)/2;

    }
    // if element is not present in array
    return -1;
    

   
}

int main()
{
    // for binary search array must be sorted
    int arr[8] = {1, 3, 12, 34, 55, 67, 78, 89};

    int index = BinarySearch(arr, 8, 89);

    cout << "89 is Present at index " << index << endl;


}