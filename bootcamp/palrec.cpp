#include<iostream>
using namespace std;
bool pal(string s){
    int n=s.length();
    int l=0;
    int r=n-1;
    if(n<2){
        return true;
    }
        if(s[l]!=s[r]){
            return false;
        }
    return pal(s.substr(1,n-2));

    //another smaller method:
    //string copy_s = s;
    //reverse(s.begin(),s.end());
    //return s == copy_s;


}
int main()
{
    string s;
    cin>>s;
    cout<<pal(s);
    return 0;
}