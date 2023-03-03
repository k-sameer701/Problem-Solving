/*

Remove duplicate elements from sorted Array

https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=remove-duplicate-elements-from-sorted-array

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int remove_duplicate(int arr[],int n){
        // code here
        
        // OPTIMISED APPROACH
        int i=0;
        for(int j=1; j<n; j++)
        {
            if(arr[j] != arr[i])
            {
                arr[i+1] = arr[j];
                i++;
            }
        }
        return (i+1);
    }

int main()
{
    return 0;
}