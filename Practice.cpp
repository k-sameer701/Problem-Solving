/*

1281. Subtract the Product and Sum of Digits of an Integer
https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

Status - Unsubmitted
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
    }
}

int check(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int ld = num % 10;
        int sum = sum + ld;
        num = num / 10;
    }
    return sum;
}
int countEven(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        // if (i % 2 == 0 && i < 9)
        //     count++;

        // if (i > 10)
        // {
        //     int t = check(i);
        //     if (t % 2 == 0)
        //         count++;
        // }
        int t = check(i);
        if (t % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    // string coordinates;
    // cin >> coordinates;
    // int ans = 0;
    // for (int i = 0; i < 2; i++)
    // {
    //     ans = ans + coordinates[i];
    // }
    // cout << ans;

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
    }
    cout << countEven(t) << endl;
}