#include<iostream>
using namespace std;

void SelectionSort(int arr[],int size)
{
    // we perform size-1 comparison so our for loop going 0 to n-1

    for(int i = 0;i<size-1;i++)
    {
        int minindex = i;
        
        // next we perform comparision with the next element of given element

        for(int j = i + 1;j<size;j++)
        {
            if(arr[minindex] > arr[j])
                 minindex = j;
            

            swap(arr[i],arr[minindex]);
        }
    }

   }

    void printArray(int arr[],int size)
    {
        for(int i = 0;i<size;i++)
        {
            cout<<arr[i] << " ";
        }
    }
 
int main()
{

int arr[6] = {6,5,4,3,2,1};

SelectionSort(arr,6);

printArray(arr,6);
     
}