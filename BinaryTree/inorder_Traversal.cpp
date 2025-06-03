#include<iostream>
#include<vector>
using namespace std;


class Node{
public:
   int data;
   Node* left;
   Node* right;

   Node(int val)
   {
    this->data=val;
    left=right=NULL;
   }
};

static int index = -1;
Node* buildTree(vector<int> node)
{ 
    index++;
    if(node[index]==-1)
    {
        return NULL;
    }

    Node* newNode = new Node(node[index]);

    newNode->left = buildTree(node);
    newNode->right = buildTree(node);   
    return newNode;
}

void preorder(Node* root)
{
    
    if(root==NULL)
        return;

     // Print the root node
    cout<<root->data<<" ";
     preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
   vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);
    cout << "Inorder traversal of the tree: ";
    inorder(root);
    cout << endl;
    return 0;



}