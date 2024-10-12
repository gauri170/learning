#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;

}

int main(){

    int number[15];

    cout<<"Value at 14 index"<<number[14]<<endl;

    int second[3]={5,7,11};

    cout<<"Value at 2 index"<<second[2]<<endl;

    int third[15] = {2,7};

    int n=15;
    printArray(third, 15);


    cout<<endl<<"Everything is fine"<<endl<<endl;

    return 0;


    }