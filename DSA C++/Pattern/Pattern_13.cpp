#include <iostream>
using namespace std;

int main()
{
    int row = 1, n;
    cout << "Enter the value of n:- ";
    cin >> n;

    while (row <= n)
    {

        //  For 1st triangle
        int col1 = 1;
        while (col1 <= (n - row + 1))
        {
            cout << col1;
            col1++;
        }

        // For center triangle

        int col2 = 1;
        while (col2 <= row - 1)
        {
            cout << "*";
            col2++;
        }

        // For 2nd center triangle

        int col3 = 1;
        while (col3 <= row - 1)
        {
            cout << "*";
            col3++;
        }

        //  For 2nd triangle

        int col4 = n - row + 1;
        while (1 <= col4)
        {
            cout << col4;
            col4--;
        }

        cout << endl;
        row++;
    }
}