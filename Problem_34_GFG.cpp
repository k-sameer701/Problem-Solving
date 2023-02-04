/*

Lower case to upper case

https://practice.geeksforgeeks.org/problems/lower-case-to-upper-case3410/1?page=5&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

string to_upper(string s1)
{
    // code
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);

    return s1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // cout << findSum(a, n);
}