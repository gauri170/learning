#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

// struct Rectangle{
//     int length;
//     int breadth;
// };

// void fun(struct Rectangle r){
//     cout<<"Length "<<r.length<<endl<<"Breadth "<<r.breadth<<endl;
// }

// int main(){
    
//     struct Rectangle r={10,5};
//     fun(r);

//     printf("length %d \nBreadth %d \n", r.length,r.breadth);
//     return 0;
// }


struct Rectangle{
    int length;
    int breadth;
};

void fun(struct Rectangle *p){
    p->length=20;
    cout<<"Length "<<p->length<<endl<<"Breadth "<<p->breadth<<endl;
}

int main(){ 
    
    struct Rectangle r={10,5};
    fun(&r);

    printf("length %d \nBreadth %d \n", r.length,r.breadth);
    return 0;
}



//more example
// struct Rectangle *fun(){
//     struct Rectangle *p;
//     p=new Rectangle;

//     p->length=15;
//     p->breadth=7;

//     return p;
// }

// int main(){
    
//     struct Rectangle *ptr=fun();
    
//     cout<<"Length"<<ptr->length<<endl<<"Breadth"<<ptr->breadth<<endl;
//     return 0;
// }