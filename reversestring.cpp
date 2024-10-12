#include<stdio.h>
#include<string>
#include<stdlib.h>

int main(){
    char A[]="python";
    char B[7];
    int i;
    for(i=0;A[i]!='\0';i++){
        i -= 1;
        int j;
        for( j=0;i>=0;i--,j++){
            B[j]=A[i];
        }
        B[j]='\0';
        printf("%s",B);

    }

    return 0;
}