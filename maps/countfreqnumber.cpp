#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }
    return 0;
}


/*
#include <iostream>
#include <unordered_map>
#include <vector>

int findMostFrequent(const std::vector<int>& nums) {
    std::unordered_map<int, int> countMap;
    int maxCount = 0;
    int mostFrequent = nums[0];

    for (int num : nums) {
        countMap[num]++;
        if (countMap[num] > maxCount) {
            maxCount = countMap[num];
            mostFrequent = num;
        }
    }

    return mostFrequent;
}

int main() {
    std::vector<int> nums = {1, 3, 2, 1, 4, 1, 3, 3, 3, 5};
    int mostFrequentNumber = findMostFrequent(nums);
    std::cout << "The most frequent number is: " << mostFrequentNumber << std::endl;
    return 0;
}


*/