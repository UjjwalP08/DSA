#include<iostream>
using namespace std;

int power(int n)
{
    // Base condition
    if(n == 0)
    {
        return 1;
    }

    // Recursive condition
    return 2 * power(n-1);
}
 
int main()
{

int n ;
cout << "Enter the power:- " ;
cin >> n;

int ans = power(n);

cout << ans;
     
}