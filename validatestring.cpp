#include<stdio.h>
#include<string>
#include<stdlib.h>

int valid(char *name){
    int i;
    for(i=0;name[i] != '\0';i++){
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57))
        return 0;
    }
    return 1;
}

int main(){
    char *name="Ani?321";
    if(valid(name)){
        printf("Valid String");
    }
    else{
        printf("Invalid String");
    }
}