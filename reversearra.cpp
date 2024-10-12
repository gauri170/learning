#include<stdio.h>
#include<stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("\nElements are \n");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}

void Append(struct Array *arr, int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}

void Insert(struct Array *arr, int index, int x){
    int i;
    if(index>=0 && index<= arr->length)
    {
        for(i=arr->length;i<index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index){
    int x=0;

    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }

    return 0;
}

int LinearSearch(struct Array arr,int key ){
    int i;
    for(i=0;i<arr.length;i++){
        if(key==arr.A[i]){
            return i;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr, int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;

    while(l<=h){
        mid = (l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }
        else if(key<arr.A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;

        }

    }
    
    return -1;
}

int RBinSearch(int a[], int l, int h, int key){
    int mid;

    if(l<=h){
        mid=(l+h)/2;

        if(key==a[mid]){
            return mid;
        }
        else if(key<a[mid]){
            return RBinSearch(a,l,mid-1,key);
        }
        else{
            return RBinSearch(a,mid+1,h,key);
        }
    }
    return -1;

}

void Reverse(struct Array *arr){
    int *b;
    int i,j;

    b=(int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1, j=0;i>=0;i--,j++)
        b[j]=arr->A[i];
    for(i=0;i<arr->length;i++){
        arr->A[i]=b[i];
    }
}

void Reverse2(struct Array *arr){
    int i,j;
    int temp;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}

void Insertsort(struct Array *arr, int x){
    int i=arr->length-1;
    if(arr->length==arr->size)
        return;
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
    
}


int main(){
    struct Array arr={{2,3,4,5,6},10,5};

    Insertsort(&arr,12);
    // Reverse2(&arr);
    Display(arr);

    return 0;
}