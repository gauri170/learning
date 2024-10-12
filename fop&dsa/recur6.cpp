#include<iostream>
using namespace std;

int power(int b, int e){
    if(e==0) return 1;

    return b*power(b,e-1);
}
int main(){

    int b;
    int e;
    cout<<"the base number: ";
    cin>>b;
    cout<<"the exponent is: ";
    cin>>e;
    int out = power(b,e);
    cout<<"The value is "<<out<<endl;

    return 0;

}