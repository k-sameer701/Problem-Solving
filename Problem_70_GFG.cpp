/*
Pangram Checking

https://practice.geeksforgeeks.org/problems/pangram-checking-1587115620/1?page=2&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Strings&sortBy=accuracy

Status - UnSubmitted -> WRONG ANSWER


*/
#include <bits/stdc++.h>
using namespace std;

bool checkPangram(string &str)
{
    // your code here
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            count++;
    }
    if (count >= 26)
        return true;

    return false;
}

int main()
{
    return 0;
}