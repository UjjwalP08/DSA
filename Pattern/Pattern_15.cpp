#include <iostream>
using namespace std;

int main()
{
    int row = 1, n;
    cout << "Enter the value of n:- ";
    cin >> n;

    while (row <= n)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= n - row + 1)
        {
            int new1 = row + col - 1;
            // cout << "*";
            // cout << row;
            // cout << col;
            cout << new1;

            new1++;
            col++;
        }
        cout << endl;
        row++;
    }
}