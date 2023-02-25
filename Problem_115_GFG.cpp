/*

Convert a list of characters into a String

https://practice.geeksforgeeks.org/problems/convert-a-list-of-characters-into-a-string5142/1?page=6&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

string chartostr(char arr[], int n)
{
    // code here
    string str;
    for (int i = 0; i < n; i++)
    {
        str = str + arr[i];
    }
    return str;
}

int main()
{
    return 0;
}