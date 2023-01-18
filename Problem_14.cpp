/*

2427. Number of Common Factors
https://leetcode.com/problems/number-of-common-factors/

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int commonFactors(int a, int b)
{
    // int mini = min(a, b);
    int count = 0;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            count++;
    }
    return count;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << commonFactors(n1, n2) << endl;
}