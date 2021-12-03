#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter the value of n:- ";
    cin >> n;
    i = n;
    int co = 1;
    while (1 <= i)
    {
        int j = 1;
        while (j <= i)
        {
            // cout << "*" << " ";
            // cout << i << " ";
            // cout << j << " ";
            cout << co << " ";
            j++;
        }
        cout << endl;
        co++;
        i--;
    }
}