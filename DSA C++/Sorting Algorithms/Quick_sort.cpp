#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivot = arr[s];
    int cnt=0;

    for(int i = s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }

    // set the pivot element at right
    int pivotindex = cnt + s;
    swap(arr[s],arr[pivotindex]);

    // mage the other sided
    int i = s,j = e;

    while(i < pivotindex && j > pivotindex)
    {
        while(arr[i] <= pivotindex)
            i++;
        
        while(arr[j] > pivotindex)
            j--;
        
        while(i < pivotindex && j > pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotindex;
}

void QuickSort(int arr[],int s,int e)
{
    // Base Condition
        if(s >= e)
            return;
        
        // Procssing
        int p = partition(arr,s,e);

        // sort the left side part and Recurssive condition
        QuickSort(arr,s,p-1);

        // sort the right side part and Recurssive condition
        QuickSort(arr,p+1,e);
}

void print(int arr[],int size)
{
    for(int i = 0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

int arr[6] = {6,5,4,3,2,1};
int size = 6;
// print(arr,size);

QuickSort(arr,0,size-1);
// quicksort(array,start,end);

print(arr,size);
     
}