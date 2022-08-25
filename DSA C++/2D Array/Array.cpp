#include <iostream>
using namespace std;

// Print the 2d Array
void printArray(int a[][3])
{
    cout << "Your 3 X 3 array is" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
}

// Search in 2d Array
bool search(int a[][3], int element)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (a[row][col] == element)
            {
                return 1;
            }
        }
    }
    return 0;
}

// row wise sum in 2D array

void rowSum(int arr[][3])
{

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// column wise sum in 2D array

void colSum(int arr[][3])
{

    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// row wise max sum with it's index in 2D array

int MaxrowSum(int arr[][3])
{
    int ans = -1;
    int maxi = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (maxi < sum)
        {
            ans = row;
            maxi = sum;
        }
    }
    cout << "Maximum Row sum is:- " << maxi << endl;

    return ans;
}

// column wise max sum with it's index in 2D array

int MaxcolSum(int arr[][3])
{
    int ans = -1;
    int maxi = -1;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        if (maxi < sum)
        {
            ans = col;
            maxi = sum;
        }
    }
    cout << "Maximum Column sum is:-" << maxi << endl;

    return ans;
}

int main()
{

    int arr[3][3];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "Enter the element:-";
            cin >> arr[row][col];
        }
    }

    printArray(arr);

    int element;
    cout << "Enter the elment you want to search in array:- ";
    cin >> element;

    if (search(arr, element))
        cout << "Element Found" << endl;

    else
        cout << "Element not found" << endl;

    cout << "Row wise sum is" << endl;
    rowSum(arr);

    cout << "Column wise sum is" << endl;
    colSum(arr);

    int rowIndx = MaxrowSum(arr);

    cout << "Maximum sum Row is:-" << rowIndx << endl;
    
    int colIndx = MaxcolSum(arr);

    cout << "Maximum sum Column is:-" << colIndx << endl;

    return 0;
}