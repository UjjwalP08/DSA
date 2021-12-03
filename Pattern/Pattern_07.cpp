#include <iostream>
using namespace std;
// 3 type of pattern in this code
int main()
{
    int i = 1, n;
    cout << "Enter the value of n:- ";
    cin >> n;
    int count = 0;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // char ch = 'A' + i -1;
            // char ch = 'A' + j -1;
            char ch = 'A' + count;
            cout << ch << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}