/*

1662. Check If Two String Arrays are Equivalent
https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
{
    string st1, str2;
    for (int i = 0; i < word1.size(); i++)
    {
        st1 = st1 + word1[i];
    }
    for (int i = 0; i < word2.size(); i++)
    {
        str2 = str2 + word2[i];
    }

    if (st1 == str2)
        return true;

    return false;
}

int main()
{
    string str;
    cin >> str;

    
    // cout << toLowerCase(str) << endl;
}