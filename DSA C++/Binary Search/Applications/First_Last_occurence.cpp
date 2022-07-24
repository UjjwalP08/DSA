// find the first and last occurence of element in array using binary search

#include<iostream>
using namespace std;

int FirstOccurence(int arr[],int size,int element)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    int firstoccurence = 0;

    while (start<end)
    {
        if (arr[mid] == element)
        {
        firstoccurence = mid;
         end = mid - 1;   
        }

        else if(element < arr[mid])
        {
            end = mid - 1;
        }
        else if(element < arr[mid])
        {
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }

    return firstoccurence;
    

}

int LastOccurence(int arr[],int size,int element)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    int lastoccurence = 0;

    while (start<=end)
    {
        if (arr[mid] == element)
        {
        lastoccurence = mid;
         start = mid + 1;   
        }

        else if(element < arr[mid])
        {
            end = mid - 1;
        }
        else if(element > arr[mid])
        {
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }

    return lastoccurence;
    

}
 
int main()
{
    int arr[8] = {1, 3, 3, 3, 3, 3, 78, 89};

    int firstocc = FirstOccurence(arr,8,3);

    int lastocc = LastOccurence(arr,8,3);

    cout << "First Occurence of 3 is " << firstocc << endl;
    cout << "Last Occurence of 3 is " << lastocc << endl;

    cout << "Total count of 3 is "<< (lastocc - firstocc) + 1;

     
}