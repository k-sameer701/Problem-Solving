/*

Product of maximum in first array and minimum in second

https://practice.geeksforgeeks.org/problems/product-of-maximum-in-first-array-and-minimum-in-second3943/1?page=9&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

long long find_multiplication(int a[], int b[], int n, int m)
    {
        // Complete the function
        vector<int> v1;
        vector<int> v2;
        
        for(int i=0; i<n; i++){
            v1.emplace_back(a[i]);
        }
        for(int j=0; j<m; j++){
            v2.emplace_back(b[j]);
        }
        
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        int ans = v1[v1.size()-1]*v2[0];
        return ans;
    }

int main()
{
    return 0;
}