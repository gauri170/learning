#include<iostream>
#include<limits.h>
#include<bits/stdc++.h>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    // int n;
    // int a[n];
    // cin>>"n is: ">>n;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    //     cout<<a[i]<<" ";
    // }
    int a[] = {7,-6,3,1,-2,0};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    if(n%2 != 0){
        cout<< a[n/2];
    }
    else{
        cout<< (a[(n - 1) / 2] + a[n / 2]) / 2.0;
    }

    int count=0;
    for(int i=0;i<n-1;i++){
        for(count = i+1;count<n;count++){
            if(a[count] == a[i]){
                count++;
            }
        }
        cout<< count;
    }   
    
    // for(int i=0;i<n;i++){
    // if(n%2 ==0){
    //     mid  = (n/2) -1;
    // }
    // else {
    //     mid = (n/2);
    // }
    // }
    // cout<<a[mid]<<endl;

    // int hash[7] = {0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]] += 1;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     cout<<hash[number]<<endl;
    // }

    unordered_map<int,int> m;

    int maxfreq = 0;
    int maxans = 0;

    for(int i=0;i<n;i++){
        m[a[i]]++;
        maxfreq = max(maxfreq,m[a[i]]);
    }

    for(int i=0;i<n;i++){
        if(maxfreq == m[a[i]]){
            maxans = a[i];
            break;
        }
    }
    cout<<maxans<<endl;


    return 0;
}