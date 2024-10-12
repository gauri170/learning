#include<iostream>
using namespace std;
int arrsum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arrsum(arr, n-1) + arr[n-1];
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    cout<<arrsum(arr,6);
    return 0;
}

