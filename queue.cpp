#include<iostream>
using namespace std;
int Queue[100], n=100, front=-1, rear=-1;
void insert(){
    int val;
    if(rear == n-1){
        cout<<"\nOverflow"<<endl;
    }
    else{
        if(front == -1)
        front =0;
        cout<<"insert element in queue: ";
        cin>>val;
        rear++;
        Queue[rear] = val;
    }
}

void dequeue(){
    if(front == -1 || front>rear){
        cout<<"\nUnderflow"<<endl;
        return;
    }
    else{
        cout<<"element deleted from queue is: "<<Queue[front]<<endl;
        front++;
    }
}

void display(){
    if(front == -1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        for(int i=front;i<=rear;i++){
            cout<<Queue[i]<<endl;
        }
    }
}

int main(){
    int choice;
    cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit"<<endl;
    do{
    cout<<"Enter a choice: ";
    cin>>choice;
        switch(choice){
            case 1: insert();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: cout<<"Exiting...."<<endl;
            break;
            default: cout<<"Enter a valid choice"<<endl;
        }
    }
    while(choice != 4);

    return 0;
}