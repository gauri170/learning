#include<iostream>
using namespace std;

void juggle(int arr[],int n, int d){
 if (n == 0)
    return;
  d = d % n;
  if (d > n)
    return;
  int temp[d];
  for (int i = n - d; i < n; i++)
  {
    temp[i - n + d] = arr[i];
  }
  for (int i = n - d - 1; i >= 0; i--)
  {
    arr[i + d] = arr[i];
  }
  for (int i = 0; i < d; i++)
  {
    arr[i] = temp[i];
  }
}
// void shiftarr(int a[], int n, int k){
//     int x=1;
//     while(x<=k){
//     int l = a[0];
//     for(int i=0;i<n-1;i++){
//         a[i]=a[i+1];
//     }
//     arr[n-1] = l;
//     x++;
//     }
// }
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int x=sizeof(arr)/sizeof(arr[0]);
    juggle(arr,sizeof(arr),4);
    print(arr,sizeof(arr));
    return 0;
}

/*
}*/
//gcd is number of cycles , l = lemgth of the cycle
//juggling algo in rotate array
//for a pair of co primes like when n=7 and d=2 the there would be one cycle that would shift the elements at once
//gcd(a,b) = gcd(b,a%b)
//for 11 numbers and three places: 0-3-6-9-1-4-7-10-2-5-8  (two primes so solved in one cycle)
//for 10 and 6: 0-6-2-8-4  and 1-7-3-9-5 

void gcdcalculate(int a[],int n, int d){
  if(n==0){
    return ;
  }
  else{
    return gcdcalculate(n,n%d);
  }
  if (n == 0)
    return;
  d = d % n;
  if (d > n)
    return;
  int temp;
  int j;

  for(int i=0;i<gcdcalculate(n,n%d);i++){
    temp = a[i];
    j=i;
  }
  while(1){
    int k=j+d;
    if(k>=n){
      k=k-n;
    }
    if(k==i){
      break;
    }
    a[j] = a[k];
    j=k;
  }
  
}

// void cal(int n,int d){

//   if (n == 0)
//     return;
//   d = d % n;
//   if (d > n)
//     return;
//   int temp[d];

  
// }

/*
void juggle(int *a,int n,int k){
  int number_of_cycles = gcd(n,k);
  int length = n/number_of_cycles;
}
for(int i=0;i<number_of_cycles;i++)
{
  int temp = a[i];
  j =i;
  for(int j=0;j<length-1;j++){
    a[i+j] = 
  }
}

*/