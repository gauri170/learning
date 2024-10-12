#include<iostream>
#define MAXS 5
using namespace std;

int stack[MAXS], top=-1;
int choice = 0;
void push();
void pop();
void show();
void peek();

int main(){

    while (choice != 5)
    {
        cout<<"choose from these options: "<<endl;
        cout<<"\n1.push\n2.pop\n3.show\n4.peek\n5.exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: show();
            break;
            case 4: peek();
            break;
            case 5: cout<<"exiting.... "<<endl;
            break;
            default: cout<<"Choose a valid choice"<<endl;
        }
    }
    
    return 0;

}

void push(){
    int val;
    if(top==MAXS-1){
        cout<<"\nOverflow"<<endl;
    }
    else{
        cout<<"enter value: ";
        cin>>val;
        top = top+1;
        stack[top] = val;
    }
}
void pop(){
    if(top==-1){
        cout<<"\nUnderflow"<<endl;
    }
    else{
        int x = stack[top];
        stack[top] = 0;
        top = top -1;

    }
}

void show(){
    for (int i=top;i>=0;i--){
        
        cout<<stack[i]<<endl;
    }
    if(top==-1){
        cout<<"The stack is empty"<<endl;
    }

}

void peek(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<stack[top]<<endl;
    }
}
