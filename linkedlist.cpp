#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(){
        data=0;
        next=NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
    Node* head;

    public:
    LinkedList{
        head = NULL;
    }

    void InsertNode(int);
    void PrintList();
    void Deletion(int);
};

void LinkedList::Deletion(int nodeofset){
    Node *temp1 = head, *temp2 = NULL;
    int ListLen = 0;

    if(head == NULL){
        cout<<"list empty"<<endl;
        return;
    }
    while(temp1 != NULL){
        temp1 = temp1->next;
        ListLen++;
    }

    if(ListLen<nodeofset){
        cout<<"Index out of range"<<endl;
        return;
    }

    temp1 = head;
    if(nodeofset == 1){
        head = head->next;
        delete temp1;
        return;
    }

    while(nodeofset > 1){
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = temp1->next;
    delete temp1;
}

void LinkedList::InsertNode(int data){
    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void LinkedList::PrintList(){
    Node* temp = head;
    if(head == NULL){
        cout<<"List empty"<<endl;
        return;
    }
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main() 
{ 
    LinkedList list; 
  
    // Inserting nodes 
    list.InsertNode(1); 
    list.InsertNode(2); 
    list.InsertNode(3); 
    list.InsertNode(4); 
  
    cout << "Elements of the list are: "; 
  
    // Print the list 
    list.PrintList(); 
    cout << endl; 
  
    // Delete node at position 2. 
    list.Deletion(2); 
  
    cout << "Elements of the list are: "; 
    list.PrintList(); 
    cout << endl; 
    return 0; 
}




