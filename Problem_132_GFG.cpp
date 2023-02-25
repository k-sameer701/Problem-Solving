/*
Remove character

https://practice.geeksforgeeks.org/problems/remove-character3815/1?page=8&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

string removeChars(string string1, string string2) {
        // code here
        string ans = "";
        for(int k = 0; k<string2.size(); k++){
            ans = "";
            for(int i = 0; i<string1.size(); i++){
                if(string1.at(i) == string2.at(k))
                    ans = ans + "";
                else
                    ans = ans + string1.at(i);
            }
            string1 = ans;
        }
        return string1;
        
    }

int main()
{
    return 0;
}