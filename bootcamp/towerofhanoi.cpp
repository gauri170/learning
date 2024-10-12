#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long unsigned toh(int n){              //ye long long unsigned isiliye likha hai jisse bade number include hojaye like 100 warna answer -1 aa rha tha without using this
    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return 2*toh(n-1) + 1;
}
int main()
{
    int n;
    cout<<"The number of rings are: ";
    cin>>n;
    cout<<"the number of moves are: "<<toh(n);
    return 0;


}