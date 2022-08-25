#include <iostream>
using namespace std;

int getSum(int arr[], int size)
{
    // Base Conditions
    if (size == 0)
        return 0;

    if (size == 1)
        return arr[0];

    // Recursvie Equan
    int sum = arr[0] + getSum(arr + 1, size - 1);

    return sum;
}

int main()
{

    // int arr[5] = {1, 2, 3, 4, 5};
    int arr[5] = {11, 2, 3, 43, 50};
    int size = 5;

    int sum = getSum(arr, size);

    cout << "Sum is " << sum << endl;
}