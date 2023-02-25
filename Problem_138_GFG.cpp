/*
Palindromic Array

https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1?page=9&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    string str = to_string(n);
    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[str.size() - i - 1])
            return false;
    }
    return true;
}
int PalinArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (!isPalindrome(a[i]))
            return 0;
    }
    return 1;
}

int main()
{
    return 0;
}