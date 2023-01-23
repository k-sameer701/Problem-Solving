/*

709. To Lower Case
https://leetcode.com/problems/to-lower-case/

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

string toLowerCase(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int main()
{
    string str;
    cin >> str;

    cout << toLowerCase(str) << endl;
}