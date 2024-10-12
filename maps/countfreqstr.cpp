#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int hash[26] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}

//if we have uppercase then we don't need to subtract 'a' and can just create an array of size 256 and the original values are assigned to lowercase and uppercase 