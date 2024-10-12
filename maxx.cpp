#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    // int max1=a[0];
    // int max2=a[0];
    int n;
    int a[n];
    cout<<"enter n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>endl;
        // if(a[i]>a[i+1]){
        //     max1 = a[i];
        // }
        // if(max1>a[i] && )
        sort(a,a+n);
        cout<<a[1]<<endl;
    }

    


    return 0;
}