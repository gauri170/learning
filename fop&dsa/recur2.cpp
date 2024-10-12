//CALCULATE THE SUM OF ARRAY ELEMENTS

#include<iostream>
using namespace std;

int arraySum(int arr[], int size){
    if(size == 0){
        return 0;
    }
    return arr[size-1] + arraySum(arr, size-1);
}

int main(){
    // int ar[]={1,2,3,4};
    // int n = sizeof(ar[0]);
    // cout<<"the size: "<<n<<endl;
    // cout<<"the elements are: "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<ar[i]<<endl;
        
    // }
    // int output =  arraySum( ar, n) ;
    // cout<<"the sum is: "<<output<<endl;


    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(nums)/sizeof(nums[0]);

    cout<<"Array elements: "<<endl;
    for(int i=0;i<size;i++){
        cout<<nums[i]<< ' ';
    }
    int sum = arraySum(nums,size);
    cout<<"Sum of array elements using recursion: "<<sum<<endl;

    return 0;
}