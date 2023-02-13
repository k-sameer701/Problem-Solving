/*

Area of Rectange, Right Angled Triangle and Circle

https://practice.geeksforgeeks.org/problems/area-of-rectange-right-angled-triangle-and-circle2600/1?page=2&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Mathematical&category[]=Sorting&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> getAreas(int L, int W, int B, int H, int R)
{
    // code here
    int rectangle = L * W;
    float triangle = (0.5) * B * H;
    float circle = (3.14) * R * R;

    vector<int> ans;
    ans.emplace_back(rectangle);
    ans.emplace_back(triangle);
    ans.emplace_back(circle);

    return ans;
}

int main()
{
    return 0;
}