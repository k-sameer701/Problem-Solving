/*
Front-Back Transformation - copy

https://practice.geeksforgeeks.org/problems/front-back-transformation1659/1?page=7&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

string convert(string s)
{
    // code here.
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        s[i]='A'+'Z'-s[i];
        else
        s[i]='a'+'z'-s[i];
    }
    return s;
}

int main()
{
    return 0;
}