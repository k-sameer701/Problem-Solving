/*
Missing number

https://practice.geeksforgeeks.org/problems/missing-number4257/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=missing-number

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N)
{
    // Your code goes here
    unordered_map<int, int> mpp;

    for(int i=1;i<=N;i++){
        mpp[i]=0;
    }

    for(int i=0; i<N; i++){
        mpp[A[i]]++;
    }

    for(auto it:mpp){
        if(it.second == 0)
            return it.first;
    }
    return 0;
}

int main()
{
    return 0;
}