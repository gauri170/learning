#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool checkpar(int n,string str){
    stack<char> s;
    for(int i=0;i<n;i++){
        if(s.empty()){
            s.push(str[i]);
        }
        else if(s.top() == '{' && str[i] == '}' || s.top() == '(' && str[i] == ')' || s.top() == '[' && str[i] == ']'){
           s.pop();
        }
        
        else {
            s.push(str[i]);
        }
    }
    if(s.empty()){
        return true;
    }
    return false;
}
int main()
{
    string s = "{([}])";
    int n = s.length();
    if(checkpar(n,s)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}