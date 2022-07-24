#include <iostream>
using namespace std;

//   Conditional Statements Practice

int main()
{
    char ch;

    cout << "Enter the Any character :- ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Your character is lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Your character is Uppercase" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Your character is Numeric" << endl;
    }
    else
    {
        cout << "Special chatacter!!!!!....." << endl;
    }

    return 0;
}