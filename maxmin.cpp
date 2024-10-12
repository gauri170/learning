#include<iostream>
#include<limits.h>
using namespace std;

int getMin(int num[], int n){

    int min = INT_MAX;

    for(int i=0; i<n; i++){
        if(num[i]>min){
            min = num[i];
        }
    }

    //reurning min value
    return min;
}

int getMax(int num[], int n){

    int max = INT_MIN;

    for(int i=0; i<n; i++){
        if(num[i]>max){
            max = num[i];
        }
    }

    //we can also use suppose 
    // int maxi = INT_MIN;
    // for(int i=0; i<n; i++){
       // maxi = max(maxi, num[i]);
    //}

    //reurning max value
    return max;
}

int main(){

    int size;
    cin>>size;

    int num[100];
    
    //taking input in array
    for(int i=0; i<size; i++){
        cin>>num[i];
        
    }

    cout<<"Maximum value is "<<getMax(num, size)<<endl;
    cout<<"Minimun value is "<<getMin(num, size)<<endl;

    return 0;
}