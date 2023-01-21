/*

1108. Defanging an IP Address
https://leetcode.com/problems/defanging-an-ip-address/description/

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(string address)
{
    string ip_address;
    for (int i = 0; i < address.size(); i++)
    {
        if (address[i] == '.')
        {
            ip_address = ip_address + "[.]";
        }
        else
        {
            ip_address = ip_address + address[i];
        }
    }
    return ip_address;
}

int main()
{
    string str;
    cin >> str;
    cout << defangIPaddr(str) << endl;
}