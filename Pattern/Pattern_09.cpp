#include <iostream>
using namespace std;

int main()
{
    int row = 1, n;
    cout << "Enter the value of n:- ";
    cin >> n;

    while (row <= n)
    {
        char ch = 'A' + n - row;
        int col = 1;
        while (col <= row)
        {
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}