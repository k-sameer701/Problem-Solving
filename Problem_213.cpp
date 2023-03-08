/*

350. Intersection of Two Arrays II
https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    // BRUTE-FORCE
    /*
    int m = nums2.size();
    vector<int> visited = {0};
    vector<int> ans;
    for(int i=0; i<nums1.size(); i++){
        for(int j=0; j<nums2.size(); j++){
            if(nums1[i] == nums2[j] && visited[j] == 0){
                visited[j] = 1;
                ans.emplace_back(nums1[i]);
                break;
            }
            if(nums2[i] > nums1[i])
                break;
        }
    }
    return ans;
    */

    // OPTIMISED
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0;
    int j = 0;

    vector<int> ans;

    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] > nums2[j])
            j++;
        else if (nums1[i] < nums2[j])
            i++;
        else
        {
            ans.emplace_back(nums1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{

    return 0;
}