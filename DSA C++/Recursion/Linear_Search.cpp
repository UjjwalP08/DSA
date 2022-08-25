#include<iostream>
using namespace std;
 
bool linearSearch(int arr[],int size,int key)
{
    if(size == 0)
        return 0;
    
    if(arr[0] == key)
        return 1;
    else{
        linearSearch(arr+1,size-1,key);
    }
}

int main()
{

// int arr[5] = {1,2,3,4,5};
int arr[5] = {10,26,35,43,53};

int size = 5;
int ele;

cout << "Enter the element you want to search:- " ;
cin >> ele;

bool ans = linearSearch(arr,size,ele);

if(ans)
    cout << "Element Present" ;
else
    cout << "Element not Present";
     
}