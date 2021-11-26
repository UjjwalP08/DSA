#include <iostream>
using namespace std;

// Let's learn about variables,datatype & typecasting

int main()
{

    // data-type
    // int,char,bool,float,double,unsigned int

    int i = 45;
    // i is a variable of integer data type
    cout << i << endl;

    double d = 3.45;
    float f = 34.2;
    char c = 'b';
    bool b =true;
    // 1 means True and 0 means false
    cout <<   b << endl;

    unsigned t = 34;
    //  Unsigned int only store the +ve integer no
    // if we try to store the -ve no it's give us the very big value when we print that

    cout << t << endl;

    // Type casting :-
    // Type casting means to convert one data type into another one

    int cb = 'a';
    cout << cb << endl;

    char ch = 97;
    cout << ch << endl;

    // To check the size of data type we use sizeof() function

    cout << " The size of int varaible i is " << sizeof(i) << endl;
    cout << " The size of char varaible ch is " << sizeof(ch) << endl;
    cout << " The size of double varaible f is " << sizeof(f) << endl;
    cout << " The size of double varaible d is " << sizeof(d) << endl;

    return 0;
}