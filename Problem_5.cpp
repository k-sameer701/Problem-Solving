/*

258. Add Digits
https://leetcode.com/problems/add-digits/

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;


int addDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int ld = num % 10;
        sum = sum + ld;
        num = num / 10;
    }
    if(sum<=9)
        return sum;
    return addDigits(sum);
}

int main()
{
    int n;
    cin >> n;
    cout << addDigits(n) << endl;
    
}