/*

1342. Number of Steps to Reduce a Number to Zero
https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int numberOfSteps(int num)
{
    int count = 0;
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
            count++;
        }
        else
        {
            num = num - 1;
            count++;
        }
    }
    return count;
}

int main()
{

    return 0;
}