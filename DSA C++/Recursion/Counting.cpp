#include<iostream>
using namespace std;

void AscendingOrder(int n)
{
    // Base Condition
    if(n == 0)
        return ;

    // Recursive Condition
    AscendingOrder(n-1);

    // Processing
    cout << n << " " ;

    // Example of Head Recursion

}

void DescendingOrder(int n)
{
    // Base Condition
    if(n == 0)
        return ;

    // Processing
    cout << n << " " ;

    // Recursive Condition
    DescendingOrder(n-1);

    
    // Example of Tail Recursion

}
 
int main()
{

int n;
cout << "Enter the number:- " ;
cin >> n;

DescendingOrder(n);
cout << endl;
AscendingOrder(n);
     
}