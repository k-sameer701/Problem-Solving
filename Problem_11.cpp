/*

2469. Convert the Temperature
https://leetcode.com/problems/convert-the-temperature/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<double> convertTemperature(double celsius)
{
    double k = celsius + 273.15;
    double f = celsius * 1.80 + 32.00;
    vector<double> v;
    v.push_back(k);
    v.push_back(f);
    return v;
}

int main()
{
    double n;
    cin >> n;
    
    //cout << convertTemperature(n) << endl;
}