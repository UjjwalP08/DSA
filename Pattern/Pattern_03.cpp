#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << " Enter the value of n:- ";
    cin >> n;
    int count = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << count << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }
}