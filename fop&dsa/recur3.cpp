//RECURSIVE FUNCTION TO CALCULATE THE SUM OF THE DIGITS OF A GIVEN NUMBER
#include<iostream>
using namespace std;

int sumofdigits(int number){
    if(number>=0 && number<=9){
        return number;
    }

    return (number%10) + sumofdigits(number/10);
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int sum = sumofdigits(n);
    cout<<"the sum of the digits of "<<n<<" is: "<<sum<<endl;
    return 0;
}