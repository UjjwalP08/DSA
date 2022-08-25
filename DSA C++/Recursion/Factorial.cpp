#include<iostream>
using namespace std;

int fact(int n)
{
    // Base Condition
    if(n == 0)
        return 1;
    
    // Recursive condition
    return n*fact(n-1);

}
 
int main()
{

int n;
cout << "Enter the Number:- " ;
cin >> n;

int ans = fact(n);

cout << ans;
}