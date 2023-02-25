/*
Confused pappu

https://practice.geeksforgeeks.org/problems/confused-pappu5749/1?page=8&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

long long findDiff(long long amount){
    //code
    
    string a = to_string(amount);
    replace(a.begin(), a.end(), '6', '9');
    long long n = stoi(a);
    long long sum = n - amount;
    return sum; 
    
}

int main()
{
    return 0;
}