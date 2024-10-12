#include<iostream>
using namespace std;

class avg{
    public:
    int x;
    int y;
    int z;
    float sum;
    void getdata(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
    void cal(){
        sum = (x+y+z)/3; 
    }
    void show(){
        cout<<"The average is: "<<sum<<endl;
    }
};

int main(){
    avg o;
    o.getdata(9,12,15);
    o.cal();
    o.show();

    return 0;

}