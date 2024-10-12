#include<iostream>
using namespace std;
int sum;
class A{
public:
    int a;
    int b;
    int c;
    void fora(int x,int y,int z){
        a = x;
        b = y;
        c = z;
    }
};
class B: public A{
public:
    void forb(){
        sum = a + b + c;
        cout << "addition is: " << sum << endl;
    }
};
class C: public A{
public:
    void forc(){
        // sum = (a + b + c) / 3.0; 
        cout << "average is: " << sum /3.0<< endl;
    }
};
int main()
{
    B obj1;
    C obj2;
    obj1.fora(1,2,4);
    obj1.forb();
    // obj2.fora(1, 2, 3);
    obj2.forc();
    
    return 0;
}
