#include<iostream>
using namespace std;

/* OUTPUT:-
     *
    * *
   * * *
  * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
             */
 
int main()
{

int n ;

cout << "Enter the value of n:- " ;
cin >> n;

for(int i = 1;i<=n;i++)
{
    for(int k = 1;k<=n-i;k++)
    {
        cout << " ";
    }
    for(int j = 1;j<=i;j++ )
    {
        cout << " *";
    }
    cout << endl;

   }

   for(int l = n - 1;l>=1;l--)
   {
        for(int m = 1;m<=n-l;m++)
        {
            cout << " ";
        }
        for(int n = 1;n<=l;n++)
        {
            cout << " *";
        }
        cout << endl;
   }


     
return 0;
}