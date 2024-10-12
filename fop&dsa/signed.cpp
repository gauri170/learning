#include<stdio.h>
#include<stdlib.h>


int main(){

    // signed char a= -127;
    // signed char b= a-3;

    // printf("result = %d", b);

    // signed char a=1;
    // while(a){
    //     printf("%d \t", a);
    //     a++;
    // }
    // unsigned char a = 1;
    //  while(a){
    //      printf("%d \t", a);
    //      a++;
    //  }
    // unsigned short int a = 1;
    // while(a){
    //     printf("%d \t", a);
    //     a++;
    // }
    // unsigned long int a = 1;
    // while(a){
    //     printf("%d \t", a);
    //     a++;
    // }

    //when a becomes 0 the loop break downs

    // int b= a>>1;
    // int c=a+b;
    // if(c%2==0){
    //     printf("even");
    // }
    // else{
    //     printf("odd");
    // }

// int a = 5;
// if(a & 1){
//     printf("odd");
// }
// else{
//     printf("even");
// }

//if (a & 1) ? primtf("odd") : printf("even");

//  int x = 6;
//  int y = 2;
 
//  int sum = (x-(-y));        // x-(~y)-1
//  printf("%d", sum);

//  int x;
//  int y;
//  printf("enter the two numbers");
//  scanf("%d,%d", &x,&y);


 int x=4;
 int y=2;
 int sub = x+(~y)+1;
 printf("%d", sub);
    return 0;
}