/*

2114. Maximum Number of Words Found in Sentences
https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int mostWordsFound(vector<string> &sentences)
{

    vector<int> v;
    for (int i = 0; i < sentences.size(); i++)
    {
        int count = 1;
        string str = sentences[i];
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == ' ')
                count++;
        }
        v.emplace_back(count);
    }

    sort(v.rbegin(), v.rend());
    int ans = v[0];
    return ans;
}

int main()
{

    return 0;
}