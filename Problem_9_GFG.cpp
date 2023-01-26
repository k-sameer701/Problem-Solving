/*

Pair Sum in Vector
https://practice.geeksforgeeks.org/problems/pair-sum-in-vector/1?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=STL&category[]=set&category[]=priority-queue&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

void sum(vector<pair<int, int>> v)
{
    long long sum = 0;
    // Your code here
    for (int i = 0; i < v.size(); i++)
    {
        sum = sum + v[i].second;
    }
    cout << sum;
    cout << endl;
}

int main()
{
    vector<pair<int, int>> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x1, x2;
        cin >> x1 >> x2;
        vec.push_back(make_pair(x1, x2));
    }
    sum(vec);
}