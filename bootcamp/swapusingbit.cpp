#include<iostream>
using namespace std;

void swap(){
    int a,b;
    cin>>a>>b;

    a = a^b;
    b = a^b;
    a = a^b;

    cout<<a<<" "<<b<<endl;
}
int main()
{
    swap();
    return 0;
}