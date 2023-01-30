/*


Status - UnSubmitted

*/

#include <bits/stdc++.h>
using namespace std;



int main()
{
    int size;
    cin >> size;
    vector<int> v;
    for(int i=0; i<size; i++){
        int x;
        cin >> x;
        v.emplace_back(x);
    }

    for(auto it:v){
        cout << it << " ";
    }
    for(int i=0; i<size; i++){
        cout << v[i] << " ";
    }
}