#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;
int tetra(int n){
int dp[2][n+1];
    dp[0][0] = 0;
    dp[1][0] = 1;
    for(int i=1;i<=n;i++){
        dp[1][i] = dp[0][i-1]*3;
        dp[0][i] = dp[1][i-1] + 2*dp[0][i-1];
    }
    return dp[1][n];
}
int main()
{
 int n;
    cin>>n;
    cout<<tetra(n);
    // dp[0] = 1;
    // dp[2] = 3;
    // // dp[3] = 6;

    // for(int i=2;i<=n;i++){
    //     return dp[n] = 
    // }
    return 0;
}