/*

1486. XOR Operation in an Array
https://leetcode.com/problems/xor-operation-in-an-array/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int xorOperation(int n, int start)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int x = start + 2 * i;
        arr[i] = x;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
    // vector<int> v;
    //  for(int i=0; i<n; i++){
    //      int x = start + 2*i;
    //      v.push_back(x);
    //  }
    //  int ans = 0;
    //  for(auto it:v){
    //      ans = ans^v[it];
    //  }
    //  return ans;
}

int main()
{
    int n, start;
    cin >> n >> start;
    
    cout << xorOperation(n, start) << endl;
}