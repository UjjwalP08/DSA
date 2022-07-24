#include<iostream>
using namespace std;
 
int main()
{

// Bitwise operator operations :- and(&) or(|) not(~) xor(^)
// bitwise operator are use to perform above operations on binary level

int a=5,b=7;
// in binary 5 is 101 and 7 is 111
cout << (a&b) << endl ;
// result of and operation is 101 which is equal to 5


cout << (a|b) << endl ;
// result of or operation is 111 which is equal to 7


cout << (~a) << endl ;
// here we know int size is 4byte=32bits
// a = 7 means 000 .... upto 32 bit 111 ---> last 3 bit 
// if we perfrom not operation so it is like
// 11111...11000(upto 3 bit)
// if first  bit is 1 so it indicate -ve number
// now we need to find the 2's complement
// after gettin it's 2's complement last 3 bit is 110
// in binaray 110 = 6 and first bit is -ve so our 
                // output is -6


cout << (a^b) << endl ;
// result of xor operation is 010 which is equal to 2

     
}