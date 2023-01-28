/*

C++ Functions (Sum of numbers) | Set 1

https://practice.geeksforgeeks.org/problems/c-functions-set-1introduction/1?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Mathematical&category[]=Strings&category[]=Hash&category[]=CPP&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int calcSum(int a, int b, int c)    
{
    // Your code here
    int sum = a+b+c;
    return sum;
}

int main()
{
    int a, b, c;
    cin >> a>> b >> c;
    cout << calcSum(a, b, c);
}