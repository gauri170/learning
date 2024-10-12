#include<iostream>
using namespace std;

int main()
{
    int unit;
    int bill;
    cout<<"units: ";
    cin>>unit;
    if(unit>=0 && unit<=100){
        bill = 200;
    }
    else if(unit>=101 && unit<=200){
        bill = 200+((unit-100)*(2));
    }
    else if(unit>=201 && unit<=300){
        bill = 200+(100*2)+((unit-200)*(3));
    }
    else if(unit>=301 && unit<= 400){
        bill = 200+(100*2)+(100*3)+((unit-300)*(5));
    }
    else{
        bill = 200+(100*2)+(100*3)+(100*5)+((unit-400)*(7));
    }

    cout<<"bill: "<<bill;
    return 0;
}