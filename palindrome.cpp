#include<iostream>
#include<string.h>
using namespace std;

char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;
}

int getlength(char name[]){
    int count =0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];

    cout<<"Enter your name: "<<endl;
    cin>>name;

    cout<<"Your name is: ";
    cout<<name<<endl;
    int len=getlength(name);

    cout<<"Palindrome or not: "<<checkPalindrome(name,len)<<endl;

    return 0;
}