// Find the sqaure root of element using binary search

#include <iostream>
using namespace std;

long long int SquareRoot(int number)
{
    int start = 0;
    int end = number;
   long long int mid = start + (end - start) / 2;
   long long int answer = -1;

    while (start <= end)
    {
        long long int square = mid*mid;

        if (square == number)
        {
            return mid;
        }
        if (square < number)
        {
            answer = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }


    return answer;
}

double morePrescision(int number ,int digit,int tempsolution)
{
    double factor = 1;
    double ans = tempsolution;

    for(int i = 0;i<digit;i++)
    {
        factor = factor/10;
        for(double j = ans ; j*j<number;j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{

    int number = 37;

    int ans = SquareRoot(number);

    cout << "Square root of 37 is " << ans << endl;

    cout << "Square root of 37 is " << morePrescision(number,3,ans) << endl;
}