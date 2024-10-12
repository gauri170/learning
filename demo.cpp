#include<stdio.h>
#include<stdlib.h>
void printpairs(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            printf("*");
        }
    }

}

// O(n^2)
