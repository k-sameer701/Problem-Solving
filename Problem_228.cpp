/*

9. Palindrome Number
https://leetcode.com/problems/palindrome-number/description/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    // FIRST
    long long int copy_of_number = x;
    long long int reversed_number = 0;
    while (x > 0)
    {
        long long int last_digit = x % 10;
        reversed_number = (reversed_number * 10) + last_digit;
        x = x / 10;
    }
    if (reversed_number == copy_of_number)
        return true;
    else
        return false;

    // // SECOND
    // long long  int d=x,m=0,z;
    // for (int i = x; i > 0; i=i/10)
    // {z=i%10;
    //  m=m*10+z;

    // }
    // if(d==m)
    // {
    //     return true;
    // }
    // else{
    //     return false;
    // }
}

int main()
{

    return 0;
}