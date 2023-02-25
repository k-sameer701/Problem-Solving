/*
Even Odd Sum

https://practice.geeksforgeeks.org/problems/even-odd-sum5450/1?page=13&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> EvenOddSum(int N, int arr[])
{
    // code here
    vector<int> v;
    int odd = 0, even = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
            even = even + arr[i];
        else
            odd = odd + arr[i];
    }
    v.emplace_back(odd);
    v.emplace_back(even);
    return v;
}

int main()
{
    return 0;
}