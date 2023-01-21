/*

1281. Subtract the Product and Sum of Digits of an Integer
https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n)
{
    int sum = 0;
    int mul = 1;

    while (n > 0)
    {
        int last_digit = n % 10;
        sum = sum + last_digit;
        mul = mul * last_digit;
        n = n / 10;
    }
    int ans = mul - sum;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << subtractProductAndSum(n) << endl;
}