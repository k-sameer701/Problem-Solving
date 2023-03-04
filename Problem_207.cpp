/*

2085. Count Common Words With One Occurrence
https://leetcode.com/problems/count-common-words-with-one-occurrence/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int countWords(vector<string> &words1, vector<string> &words2)
{

    int count = 0;
    vector<string> str;
    copy(words1.begin(), words1.end(), back_inserter(str));
    copy(words2.begin(), words2.end(), back_inserter(str));

    map<string, int> mpp;
    for (int i = 0; i < str.size(); i++)
    {
        mpp[str[i]]++;
    }
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        if (it->second == 2)
            count++;
    }

    return count;
}

int main()
{

    return 0;
}