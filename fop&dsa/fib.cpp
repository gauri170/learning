#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0) return 0;
    else if (n==1) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int num;
    cout<<"enter value: "<<endl;
    cin>>num;
    // cout<<"value of n"<<num<<endl;
    int out = fibonacci(num);
    cout<<endl;
    cout<<out<<endl;
    return 0;
}