#include<iostream>
using namespace std;

class test{
    int a;
    public:
    test(){

    }

    test(int x){
        a=x;
        cout<<"the value is: "<<a;
    }
};

int main()
{
    test t(2345);
    test t1(t);
    return 0;
}