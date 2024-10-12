#include<iostream>

using namespace std;


//CALL BY VALUE
// int add(int a,int b){
//     int c;
//     c=a+b;
//     return c;
// }

// int main(){
//     int num1=10,num2=15,sum;
//     sum = add(num1,num2);
//     cout<<"sum is "<<sum;
//     return 0;
// }


//CALL BY ADDRESS
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}

int main(){
    int num1=10,num2=15;

    swap(&num1,&num2);

    cout<<"First number "<<num1<<endl;
    cout<<"Second number "<<num2<<endl;

    return 0;
}

//when we use call by reference then the only change is in swap(int &x, int &y) else we remove the * and the & from anywhere else like on line 24 25 26 and 32