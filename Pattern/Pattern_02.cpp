#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "  Enter the value of n:- ";
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}