#include <iostream>
using namespace std;

//  Operator in c++/
// airthmatic :- +,-,*,/,%
// relational :- ==,=,<=,>=,!=(not equal to)
// bitwise :- && , || , !

int main()
{

    int a = 5, b = 4;

    // Arithmatic operators
    // cout << "Arithmatic operators " << endl;
    // cout <<   a+b << endl;
    // cout <<   a/b << endl;
    // cout <<   a*b << endl;
    // cout <<   a-b << endl;
    // cout <<   a%b << endl;

    // Relational operators

    cout << "Relational operators " << endl;
    cout << bool(a > b) << endl;
    cout << bool(a < b) << endl;
    cout << bool(a == b) << endl;
    cout << bool(a != b) << endl;

    // Increment and Decrement operators

    int i = 7;

    cout << "Increment and Decrement operators O/P" <<endl;

        cout
         << ++i << endl;
    // pre increment:- means  first increase i value and print the new value of i so now i = 8

    cout << i++ << endl;
    // post increment:- print the old value of i then increment the value of i so print 8 after that i = 9

    cout << i << endl;
    // to check the value of i after post increment which is i = 9

    cout << --i << endl;
    // pre decrement:- means first decreast i value and print the new value of i so print the i = 8

    cout << i-- << endl;
    // post decrement: print the old value of i then decrement the value of i so print the 8 after decremnt i value which is i = 7

    cout << i << endl;
    // to check the vlaue of i after post decrement
    // which is i  = 7

    return 0;
}
