/*

Convert String to LowerCase

https://practice.geeksforgeeks.org/problems/java-convert-string-to-lowercase2313/1?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Strings&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

string toLower(string s2)
{
    // code here
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    return s2;
}

int main()
{
    return 0;
}