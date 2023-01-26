
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int arr[x];
        for(int i=0; i<x; i++){
            cin >> arr[i];
        }
        int sum = 0;
        int cnt1 = 0;
        int cnt2 = 0;

        vector<int> v(3);
        for(int i=0; i<x; i++){
            int t = arr[i];
            if(t%2!=0){
                cnt1++;
            }
            else    cnt2++;
        }
        
    }
}
