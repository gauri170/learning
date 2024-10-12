/*
no return type
called using class name
non parametarized
parametarized
*/

#include<iostream>
using namespace std;

class test{
    public:
    int a;
    // test(int x){
    //     a=x;
    //     cout<<a<<endl;  
    // }
    test(){
        cout<<a<<endl;
    }

    // void show(){
    //     cout<<"member function"<<endl;
    // }
    ~test(){
    }
};

int main(){
    // test t(2);
    test t1();

    return 0;

}

