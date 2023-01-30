#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    // Your code here
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int t1 = a1 + a2;
    int t2 = a2 + a3;
    int t3 = a3 + a1;
    if( (t1!=0 || t2!=0 || t3!=0))
        cout << "NO" << endl;
    else if ((t1 % 2 == 0 || t2 % 2 == 0 || t3 % 2 == 0) )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
}
