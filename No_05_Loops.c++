#include <iostream>
using namespace std;

//------------> let's leran about loops
int main()
{

    // while loop

    int i = 1, n;

    cout << "Enter the value of n:- ";
    cin >> n;

    //  while (i<=n)
    //  {
    //      cout << i << " ";
    //      i++;
    //  }

    //------------>  Print the sum of first n numbers <----------------
    // int sum = 0;

    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // cout << sum;

    // ------------> check the given No is prime or not <----------------

// becoz 1 is not the prime number
    int j = 2;

    while (j < n)
    {
        if(n%j==0)
        {
            cout << " Not Prime no for " << j << endl;
        }
        else
        {
            cout << "Prime no for " << j << endl;

        }

        j++;
    }
    

}