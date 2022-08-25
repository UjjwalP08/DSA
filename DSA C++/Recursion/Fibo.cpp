#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n == 0)
        return 0;
    
    if(n == 1)
        return 1;


    int ans = fibo(n-1) + fibo(n-2);

    // cout << n << " ";
    return ans;
}

 
int main()
{

int n;
cout << "Enter the number:- " ;
cin >> n;
fibo(n);

cout << fibo(n);
     
}