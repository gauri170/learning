#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
public:
node*next;
int key;
node(){
    this->key =0;
    this->next = NULL;
}
};
void push(node** headr, int newk){
    node* newnode =  new node();
    newnode->key = newk;
    newnode->next = *(headr);
    (*headr) = newnode;
}
bool search(node* head, int x){ 
    node* data = head;
    while(data != NULL){
        if(data->key == x){
            return true;
        }
        data = data->next;
    }
    return false;
}
int main()
{   node* head = NULL;
    int x= 24;
    push(&head, 1);
    push(&head, 4);
    push(&head, 15);
    push(&head, 19);
    push(&head, 3);
    push(&head, 22);
    push(&head, 76);
    push(&head, 34);
    push(&head, 5);
    bool ans =search(head, x);
    cout<<ans<<endl;
    return 0;
}

//floyd