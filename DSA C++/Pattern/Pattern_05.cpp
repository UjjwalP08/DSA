#include <iostream>
using namespace std;

int main()
{
    int row = 1, n;

    cout << " Enter the value of row :- ";
    cin >> n;

    while (row <= n)
    {
        int i = row;
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + i - 1;

            // cout << i << " ";
            // cout << row + col - 1  << " ";//same output as above without using extra variable
            cout << ch << " ";
            i++;
            col++;
        }

        cout << endl;
        row++;
    }
}