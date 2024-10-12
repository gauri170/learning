#include<iostream>
using namespace std;

int findMax(int nums[], int start, int end){
    if(start==end) return nums[start];

    int mid = (start+end)/2;
    int max1 = findMax(nums,start,mid);
    int max2 = findMax(nums, mid +1, end);

    return (max1 > max2) ? max1 : max2;
}
int findMin(int nums[], int start, int end){
    if(start==end) return nums[start];

    int mid = (start+end)/2;
    int min1 = findMin(nums,start,mid);
    int min2 = findMin(nums, mid +1, end);

    return (min1 > min2) ? min2 : min1;
}

int main(){
    int arr[]={9,2,4,0,2,2,3,4,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=size-1;
    int mid = (s+e)/2;
    cout<<"the elements of the array are"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' '<<endl;
    }
    cout<<"the max is: "<<findMax(arr, s,e)<<endl;
    cout<<"the min is: "<<findMin(arr,s,e)<<endl;
}