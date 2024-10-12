#include<iostream>
using namespace std;
bool powerof2(int x){
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    return (x%2==0 && powerof2(x/2));
}
int main()
{
    int p;
    cin>>p;
    cout<<powerof2(p);
    return 0;
    
}