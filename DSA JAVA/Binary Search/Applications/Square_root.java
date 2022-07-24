public class Square_root {
   static  int SquareRoot(int number)
{
    int start = 0;
    int end = number;
    int mid = start + (end - start) / 2;
    int answer = -1;

    while (start <= end)
    {
         int square = mid*mid;

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

static double morePrescision(int number ,int digit,int tempsolution)
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
public static void main(String[] args) {
    int number = 48;

    int ans = SquareRoot(number);

    System.out.println("Square root of "+number+" is "+ans);

    double newans = morePrescision(number, 3, ans);

    System.out.println("Square root of "+number+" is "+newans);

}
    
}
