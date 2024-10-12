#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {}
}
bool loop(node* head ){
    unordered_set<node*>visited;
    node* data = head;

    while(data != NULL){
        if(visited.find(data) != visited.end()){
            return true;
        }

        visited.insert(data);
        data = data->next;
    }

    return false;

}
int main()
{
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(5);
    head->next->next->next->next = new node(10);
    head->next->next->next->next->next = new node(3);
    head->next->next->next->next->next->next = head->next;
    bool ans  = loop( head);
    if(ans){
        return true;
    }
    else{
        return false;
    }


    return 0;
}