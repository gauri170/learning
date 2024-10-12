#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){

    // int a = 10;
    // int *p;
    // p=&a;
    // cout<<a<<endl;
    // printf(" using pointer %d %d", p,&a);



    //now we will see pointer to an array
    // int A[5]={2,4,6,8,10};
    // int *p;
    // p=A;    //or instead of this we can also write p=&A[0];
    // for(int i=0;i<5;i++)
    // cout<<p[i]<<endl;



    //now we will create an array using a pointer
    int *p;
    p=(int *)malloc(5*sizeof(int));  //instead of this we can also write p=new int[5];
    p[0]=10;p[1]=15;p[2]=14;p[3]=21;p[4]=31;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    free(p);
    //if we use the new function then at the end write delete [ ] p;
    //this array is created inside heap


    return 0;
}
