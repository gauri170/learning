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

int depth(Node *current_node)
{
    if (!current_node)
    {
        return 0;
    }
    // if (current_node->left == NULL &&
    //     current_node->right == NULL)
    // {
    //     return 1;
    // }

    return 1 + max(depth(current_node->right),
                   depth(current_node->left));
}

int main()
{
    Node *root = dummy_tree();
    cout << depth(root) << "\n";
}