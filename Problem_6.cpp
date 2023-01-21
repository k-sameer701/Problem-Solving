/*

2413. Smallest Even Multiple
https://leetcode.com/problems/smallest-even-multiple/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int smallestEvenMultiple(int n)
{
    if (n % 2 == 0)
        return n;
    return 2 * n;
}

int main()
{
    int n;
    cin >> n;
    cout << smallestEvenMultiple(n) << endl;
}