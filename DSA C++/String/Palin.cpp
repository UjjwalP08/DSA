#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string lower(string str)
{
    string temp = "";
    for (int i = 0; i < str.length() ; i++)
    {
        temp += tolower(str[i]);
    }
    cout << temp << endl;
    str = "";
    for (int i = 0; i < temp.length(); i++)
    {
        char ch = temp[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            str += ch;
        }
    }
    cout << str << endl;

    return str;
}

bool checkPalindrome(string s)
{
    s = lower(s);

    int start = 0;
    int end = s.length()-1;
    while (start < end)
    {
        cout << s[start]<<" "<<s[end]<<endl;
        if (s[start++] != s[end--])
            return 0;

    }
        return 1;
};
int main()
{

    string str = "N2 i&nJA?a& jnI2n";

    string str1 = lower(str);

    // cout << str <<endl;
    cout << checkPalindrome(str1);

    return 0;
}