#include<iostream>
using namespace std;

void print(int arr[],int start,int end)
{
    for(int i = start;i<=end;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[],int start,int end,int key)
{

    print(arr,start,end);

    int mid = start + (end-start)/2;

    if(start>end)
        return 0;

    if(arr[mid] == key)
        return 1;
    
    if(arr[mid]<key)
        {
            // Go to the right side so start = mid+1;
            return binarySearch(arr,mid+1,end,key);
        }
    else
        {
            // go to the left side so end = mid-1
            return binarySearch(arr,start,mid-1,key);
        }
}
 
int main()
{

int arr[6] = {1,2,3,4,5,6};
// int arr[5] = {10,23,56,78,90};

int size = 6;
int ele;
cout << "Enter the element you want to serach in array:- " ;
cin >> ele;

bool ans = binarySearch(arr,0,size-1,ele);

if(ans)
    cout << "Element Present";

else
    cout << "Element Not Present";
     
}