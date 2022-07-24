// cout << " Find Min Max Element of Array " ;

#include<iostream>
using namespace std;

int getMin(int arr[],int size)
{
    int min_ele = INT_MAX;

    for(int i = 0;i<size;i++)
    {
        min_ele = min(min_ele,arr[i]);
    }

    return min_ele;
}
int getMax(int arr[],int size)
{
    int max_ele = INT_MIN;

    for(int i = 0;i<size;i++)
    {
        max_ele = max(max_ele,arr[i]);
    }

    return max_ele;
}
 
int main()
{

    int arr[6] = {2,5,3,6,-9,10};

    cout << "Maximum Element is " << getMax(arr,6) << endl;
    cout << "Minimum Element is " << getMin(arr,6) << endl;
     
}