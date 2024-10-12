#include<stdio.h>
#include<iostream>
#include<stdlib.h>

int main(){
    int A[3][4]={{1,2,3,4},{2,6,8,4},{3,5,7,8}};

    int *B[3];
    B[0]=new int [4];
    B[1]=new int [4];
    B[2]=new int [4];

    int **C;
    C= new int *[3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];

    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}