#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   map<int , int> m;
   for(int i=0;i<n;i++){
    m[arr[i]]++;
   }
    map<int,int> :: iterator it = m.begin() ;

int mode = arr[0]; 
int max_count = 1;
   while(it != m.end()){
    if(it->second > max_count){
        mode = it->first;
        max_count = it->second;
    }
   }

   cout<<mode<<endl;


   return 0;


   
}