/*

2413. Smallest Even Multiple
https://leetcode.com/problems/smallest-even-multiple/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << sum(n1, n2) << endl;
}