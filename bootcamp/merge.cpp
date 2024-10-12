#include<iostream>
#include<vector>
using namespace std;

void merges(vector<int>&arr,int low,int mid,int high){
    vector<int> result;
    int left = low;
    int right = mid+1;

    while(left<=mid && right<=high ){
        if(arr[left]<arr[right]){
            result.push_back(arr[left]);
            left++;
        }
        else{
            result.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        result.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        result.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i] = result[i-low];
    }
}
void merge_sort(vector<int>&arr, int low, int high){
    // int low =0;
    // int high = arr.size() -1;
    if(low>=high) return;
    int mid = (low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1, high);
    merges(arr,low,mid,high);
}

int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    merge_sort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}