#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    return temp;
}

Node *dummy_tree()
{
    Node *root = newNode(0);
    root->left = newNode(1);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    return root;
}

void print_preOrder(Node *currentNode)
{
    if (!currentNode)
    {
        return;
    }
    cout << currentNode->data << " ";
    print_preOrder(currentNode->left);
    print_preOrder(currentNode->right);
}

void print_inOrder(Node *currentNode)
{
    if (!currentNode)
    {
        return;
    }
    print_inOrder(currentNode->left);
    cout << currentNode->data << " ";
    print_inOrder(currentNode->right);
}

void print_postOrder(Node *currentNode)
{
    if (!currentNode)
    {
        return;
    }
    print_postOrder(currentNode->left);
    print_postOrder(currentNode->right);
    cout << currentNode->data << " ";
}

int main()
{
    Node *root = dummy_tree();
    print_postOrder(root);
    cout << "\n";
}