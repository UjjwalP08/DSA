#include <iostream>
using namespace std;

int main()
{
    int row = 1, n;
    cout << "Enter the value of row :- ";
    cin >> n;

    while (row <= n)
    {
        int space = n - row;
        while (space > 0)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= row)
        {

            // cout << "*";
            cout << row;
            // cout << col ;
            col++;
        }
        cout << endl;
        row++;
    }
}