#include <iostream>
using namespace std;

int main()
{
    int row = 1, n;
    cout << "Enter the value of n:- ";
    cin >> n;

    while (row <= n)
    {
        // to Print for space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        // For the 1st triangle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }

        // For the 2nd triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }
}