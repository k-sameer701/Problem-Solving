/*

349. Intersection of Two Arrays
https://leetcode.com/problems/intersection-of-two-arrays/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        set<int> temp;
        
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j])
                    temp.insert(nums1[i]);
            }
        }

        // CONVERTING SET TO VECTOR
        vector<int> v(temp.begin(), temp.end());

        return v;
    }

int main()
{

    return 0;
}