#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    int count = 1;
    cout << "Enter the value of n:- ";
    cin >> n;

    while (i <= n)
    {
        // i is work as row
        int j = 1;
        // j is work as coulumn
        while (j <= i)
        {
            // char ch = 'A' + i -1;
            // char ch = 'A' + j -1;
            char ch = 'A' + count - 1;

            // cout << "*"<<" ";
            // cout << i <<" ";
            // cout << j<<" ";
            // cout << count << " ";
            cout << ch << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }
}