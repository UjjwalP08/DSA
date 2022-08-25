#include<iostream>
using namespace std;

void merge(int *arr,int s,int e)
{
    int mid = s + (e-s)/2;

    // Length of left side array
    int len1 = mid - s + 1;

    // Length of right side array
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainindex = s;

    // copy left side array
    for(int i = 0;i<=len1;i++)
    {
        first[i] = arr[mainindex++];
    }

// copy right side array
    mainindex = mid + 1;
    for(int i = 0;i<=len2;i++)
    {
        second[i] = arr[mainindex++];
    }

    // Merge 2 sorte array
    int index1 = 0;
    int index2 = 0;
    int k = s;

    while(index1<len1 && index2<len2)
    {
        if(first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }

    while(index1 < len1)
    {
        arr[k++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[k++] = second[index1++];
    }
    

}

void  mergeSort(int *arr,int s,int e)
{
    if(s>=e)
        return ;
    
    int mid = s + (e-s)/2;

    // sort left side part of array
    mergeSort(arr,s,mid);

    // sort right side part of array
    mergeSort(arr,mid+1,e);

    // Merge both array
    merge(arr,s,e);


}
int main()
{

int arr[6] = {6,5,4,3,2,1};
int size = 6;

mergeSort(arr,0,size-1);

for(int i = 0;i<size;i++)
{
    cout << arr[i] << " ";
}
cout << endl;
     
}