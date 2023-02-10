/*

1678. Goal Parser Interpretation
https://leetcode.com/problems/goal-parser-interpretation/description/

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

string interpret(string command) {
        int size = command.size();
        string str;
        for(int i=0; i<size; ){
            if(command[i]=='G'){
                str = str+'G';
                i++;
            }
            else if(command[i]=='(' && command[i+1]==')')
            {
                str= str+ 'o';
                i=i+2;
            }
            else if(command[i]=='(' && command[i+1]=='a')
            {
                str=str+"al";
                i=i+4 ;
            }
        }
        return str;
    }

int main()
{

    return 0;
}