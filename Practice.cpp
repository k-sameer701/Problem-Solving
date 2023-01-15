class Solution {
public:
    
int check(char ch){
    
    int a;
    switch(ch){
        case 'I': a=1; break;
        case 'V': a=5; break;
        case 'X': a=10; break;
        case 'L': a=50; break;
        case 'C': a=100; break;
        case 'D': a=500; break;
        case 'M': a=1000; break;
    }
    return a;
    
}
int romanToInt(string s)
{
    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        //
        if(check(s[i])>=check(s[i+1]))
            ans = ans + check(s[i]);
        else
            ans = ans - check(s[i]);
    }
    return ans;
}
};