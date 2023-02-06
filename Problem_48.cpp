/*

2180. Count Integers With Even Digit Sum
https://leetcode.com/problems/count-integers-with-even-digit-sum/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int countEven(int num)
{
    int count = 0;
    for (int i = 2; i <= num; i++)
    {
        if (i % 2 == 0 && i < 10)
            count++;
        else
        {
            int new_Number = i;
            int sum = 0;
            while (new_Number != 0)
            {
                int ld = new_Number % 10;
                sum = sum + ld;
                new_Number = new_Number / 10;
            }
            if (sum % 2 == 0)
                count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << countEven(n);
}