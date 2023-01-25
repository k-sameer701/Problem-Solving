/*

Find the Frequency

https://practice.geeksforgeeks.org/problems/find-the-frequency/1?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=STL&category[]=set&category[]=priority-queue&sortBy=accuracy

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int findFrequency(vector<int> v, int x)
{
    // Your code here
    unordered_map<int, int> mpp;
    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]] = mpp[v[i]] + 1;
    }
    return mpp[x];
}

int main()
{
    vector<int> vec;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x1;
        cin >> x1;
        vec.push_back(x1);
    }
    cin >> x;
    cout << findFrequency(vec, x);
}