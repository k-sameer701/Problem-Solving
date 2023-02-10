/*

1323. Maximum 69 Number
https://leetcode.com/problems/maximum-69-number/


Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int maximum69Number(int num)
{
    // to_string -> Type caste integer to string
    string str = to_string(num);
    char ch = '9';
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '6')
        {
            str[i] = ch;
            break;
        }
    }
    // stoi -> Type Caste string to integer
    int ans = stoi(str);

    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << maximum69Number(n);
    return 0;
}