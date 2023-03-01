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
int main()
{

//  --------> Defalut Value 0 <--------
    int arr[10] = {0};
    printArray(arr,10);

// --------> Defalut Value 1 <-------- 
    int ary[15];
    fill_n(ary,15,1);
    printArray(ary,15);

// --------> Defalut Value 2 <--------
    int arry[20];
    fill_n(arry,20,2);
    printArray(arry,20);
     
}