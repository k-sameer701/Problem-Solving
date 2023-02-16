/*
Count of camel case characters

https://practice.geeksforgeeks.org/problems/find-the-camel3348/1?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Strings&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int countCamelCase(string s)
{
    // code here.
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            count++;
    }
    return count;
}

int main()
{
    return 0;
}