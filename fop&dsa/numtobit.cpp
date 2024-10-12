#include<iostream>
#include<bitset>
using namespace std;

int countSetBits(int x){
    int count = 0;
    while(x){
        x = x & (x-1);
        count++;
    }
    return count;
}
int main(){
    // int a=32;
    // int b=a>>3;
    // int c= 258;
    // cout<<"a = "<<bitset<8>(a)<<endl;
    // cout<<"b = "<<bitset<8>(b)<<endl;
    // cout<<"c = "<<bitset<16>(c)<<endl;

    // cout<<"1 = "<<bitset<8>(1)<<endl;
    // int d=1<<3;
    // cout<<"d = "<<bitset<8>(d)<<endl;
    // cout<<"248 = "<<bitset<16>(248)<<endl;
    // cout<<"247 = "<<bitset<16>(247)<<endl;

    // int x = 172;
    // int y=x & (x-1);

    // cout<<"a = "<<bitset<16>(x)<<endl;
    // cout<<"b = "<<bitset<16>(x-1)<<endl;
    // cout<<"c = "<<bitset<16>(y)<<endl;

    // int x=172;
    // int y=x & ~(x-1);

    // cout<<"a ="<<bitset<8>(x)<<" = "<<x<<endl;
    // cout<<"b ="<<bitset<8>(x-1)<<" = "<<x-1<<endl;
    // cout<<"c ="<<bitset<8>(~(x-1))<<" = ~ ("<<(~(x-1))<<")"<<endl;
    // cout<<"d ="<<bitset<8>(y)<<" = "<<y<<endl;

    int x=172;
    int res = countSetBits(x);
    cout<<"172 = "<<bitset<16>(x)<<endl;
    cout<<res;



    return 0;
}










































