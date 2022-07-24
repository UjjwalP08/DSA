#include<iostream>
using namespace std;

void InsertionSort(int arr[],int size)
{
    // for loop for the round the compariosn is n-1 if our n is start with 0
    // comparioson is n if n is start with 1

    for(int i = 1;i<size;i++)
    {
        int temp = arr[i];
        int j = i - 1;

        // Using While loop
            while(j>=0)
            {
                if(arr[j] > temp)
                {
                    // Shift Element
                    arr[j+1] = arr[j];
                }
                else
                    break;
                j--;
            }
        arr[j+1] = temp;

        // Using For loop
        // for(;j>=0;j--)
        // {
        //     if(arr[j] > temp)
        //     {
        //         // shift the element
        //         arr[j+1] = arr[j];
        //     }
        //     else
        //     break;
        // }
        // arr[j+1] = temp;
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

InsertionSort(arr,6);

printArray(arr,6);
     
}