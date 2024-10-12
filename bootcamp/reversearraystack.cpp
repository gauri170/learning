#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void reversearr(int n, vector<int>arr){
    stack<int> s;
    for(int i=0;i<n;i++){
        s.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i] = s.top();
        s.pop();
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{

    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversearr(n,arr);
   
    return 0;
}