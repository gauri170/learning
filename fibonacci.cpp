#include<iostream>
using namespace std;

int main(){
    // int n=10;
    int a=0;
    int b=1;
    int k;
    cin>>k;
    while(k!=0){
        int nextnum = a+b;
        // cout<<nextnum<<endl;
        a=b;
        b=nextnum;
        k--;
    }
    cout<<a;
}
