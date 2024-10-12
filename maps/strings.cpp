#include<iostream>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s = "My name is ";
    string s1 = "gauri";
    string s3 ="2";
    
    // sort(s.begin(),s.end());
    // cout<<s;
    s = s.substr(0,11) + s1 + ".";
    cout<<s<<endl;;

    cout<<stoi(s3) + 1<<endl;

    //strcat works on character array
    //stoi
    return 0;
}

//hackerrank = bigger is greater :
// if(next_permutation(w.begin(),w.end()));
//{
//     return w;
//} else{
//     return "no answer";
//}