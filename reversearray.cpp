#include<iostream>
using namespace std;

void reverse(int a[],int n){
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--){
        swap(a[i],a[j]);
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{   
    int arr[] = {1,2,3,4,5,6};
    int x = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,x);
    print(arr,x);
    return 0;
}

//void doublerev(int *a,int l,int r){
//     int n=r+1-l;
//     forn(i,n/2.0){
//         swap(a[l+i],a[r-i]);
//     }
// }


// doublerev(a,0,k-1);
// doublerev(a,k,n-1);
// doublerev(a,0,k-1);
// printarr(a,n);