/*
Union of Two Sorted Arrays

https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    // BRUTE FORCE

    vector<int> ans;
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(arr2[i]);
    }

    for (auto it : st)
    {
        ans.emplace_back(it);
    }
    return ans;
}

int main()
{
    return 0;
}