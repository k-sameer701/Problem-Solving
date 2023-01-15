/*

9. Palindrome Number
https://leetcode.com/problems/palindrome-number/

*/
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    int copy_of_number = x;
    int reversed_number = 0;
    while (x > 0)
    {
        int last_digit = x % 10;
        reversed_number = (reversed_number * 10) + last_digit;
        x = x / 10;
    }
    if (reversed_number == copy_of_number)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    cout << isPalindrome(n) << endl;
}