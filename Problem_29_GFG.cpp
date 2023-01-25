/*

Frequencies of Limited Range Array Elements

https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

void frequencyCount(vector<int> &arr, int N, int P)
{
    // APPROACH 1:
    unordered_map<int, int> mpp;

    // PRECOMPUTATION
    for (int i = 0; i < N; i++)
    {
        mpp[arr[i]] = mpp[arr[i]] + 1;
    }

    for (int j = 1; j <= P; j++)
    {
        // FETCHING
        cout << mpp[j] << " ";
    }

    
}

int main()
{
    vector<int> vec;
    int n, p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    cin >> p;
    frequencyCount(vec, n, p);
}