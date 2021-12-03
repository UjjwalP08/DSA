#include <iostream>
using namespace std;

int main()
{
    int row, n;
    cout << " Enter the value of row:- ";
    cin >> n;
    row = n;

    while (row >= 1)
    {
        int col = 1;
        while (col <= row)
        {
            // cout << "*"<< " ";
            // cout << row << " ";
            cout << col << " ";
            col++;
        }

        cout << endl;
        row--;
    }
}