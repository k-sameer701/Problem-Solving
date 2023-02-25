/*
Count of smaller elements

https://practice.geeksforgeeks.org/problems/count-of-smaller-elements5947/1?page=11&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int countOfElements(int arr[], int n, int x) 
{
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<=x)
            count++;
    }
    return count;
}

int main()
{
    return 0;
}