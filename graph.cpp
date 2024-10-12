#include<stdio.h>
#define V 4

void init(int arr[V][V]){
    int r,c;
    for(r=0;r<V;r++){
        for(c=0;c<V;c++){
            arr[r][c] = 0;
        }
    }
}

void insertEdge(int arr[V][V], int i,int j){

    arr[i][j] = 1;
    arr[j][i] = 1;
}

void print(int arr[V][V]){
    int r,c;
    for(r=0;r<V;r++){
        printf("%d: ",r);
        for(c=0;c<V;c++){
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }
}
int main(){
    int Adjmatrix[V][V];

    init(Adjmatrix);
    insertEdge(Adjmatrix,0,1);
    insertEdge(Adjmatrix,0,2);
    insertEdge(Adjmatrix,1,2);
    insertEdge(Adjmatrix,2,0);
    insertEdge(Adjmatrix,2,3);
    print(Adjmatrix);

    return 0;
}