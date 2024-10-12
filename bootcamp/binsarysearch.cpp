#include<iostream>
#include<vector>
using namespace std;


int binarys(int arr[], int size, int key){
    int s = 0;
    int e = size -1;
    int mid = (s+e)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e = mid -1;
        }
        mid = (s+e)/2;
    }
    return -1;

}
int main()
{
    int arr[6] = {2,4,6,8,12,18};

    int index = binarys(arr,6,12);
    cout<<"Index of 12 is "<<index<<endl;
    return 0;
}