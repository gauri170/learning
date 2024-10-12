#include<stdio.h>
#include<stdlib.h>

int main(){
    char A[] = "GAURI";
    int i;
    for(i=0;A[i]!= '\0';i++){
        A[i]=A[i]+32;
    }
    printf("%s", A);
}

//int main(){
//     char A[] = "wElCOme";
//     int i;
//     for(i=0;A[i]!='\0';i++){
//         if(A[i]>65 && A[i]<=90){
//             A[i] += 32;
//         }
//         else if(A[i]>='a' && A[i]<=122){
//             A[i] -= 32;
//         }
//     }
// }