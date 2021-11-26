#include <iostream>
using namespace std;
//  print the sum of first even n numbers using loop

int main()
{
    int i = 2, n;
    int sum = 0;

    cout << "Enter the value of n:- ";
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;

        i = i + 2;
    }

    cout << "Sum of 1 to " << n << " even no is " << sum;
}