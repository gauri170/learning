#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini =j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}




int main()
{
    // vector<int> arr[] = {2,4,3,1};
    // map<int,int> m;
    // int n = arr.size();
    // for(int i=0;i<n;i++){
    //     m[arr[i]] = i;
    // }
    // int max_element = n-1;
    // map<int,int> :: iterator it = m.begin();
    // for(int i=0;i<n-1;i++){
    // int min_element = it->first;
    // int min_index = it->second;

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}