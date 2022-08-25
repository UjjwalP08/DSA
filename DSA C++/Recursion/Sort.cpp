// check the array is sorted or not

#include<iostream>
using namespace std;

bool isSorted(int arr[],int size)
{
    // Base Condition
    if(size == 0 || size == 1)
        return 1;
    
    if(arr[0]>arr[1])
        return 0;
    
    else{
        isSorted(arr+1,size-1);
    }

}
 
int main()
{

// int arr[6] = {1,2,4,6,8,9};
int arr[6] = {1,2,4,6,8,5};

int size = 6;

bool ans = isSorted(arr,size);

if(ans)
{
    cout << "Sorted";
}
else{
    cout << "Not Sorted";
}



     
}