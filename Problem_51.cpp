/*

1716. Calculate Money in Leetcode Bank
https://leetcode.com/problems/calculate-money-in-leetcode-bank/

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int totalMoney(int n)
{
    int count = 0;
    int sum = 0;
    int q = n/7;
    
    
    int start = 1, end = 7;
    while(q!=-1){
        
        for(int i=start; i<=end && count < n; i++){
            count++;
            cout << count << " ";
            sum = sum + i;
            
        }
        
        start++;
        end++;
        q--;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << totalMoney(n) ;
    return 0;
}