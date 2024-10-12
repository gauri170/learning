#include<iostream>

using namespace std;

int main(){

    int a=10;
    int &r=a;

    cout<<a<<endl<<r<<endl;
    //if we make any changes to a it will affect r and vice versa

}