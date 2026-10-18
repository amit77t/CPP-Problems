#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
  int data;
  Node* left;
  Node* right;

  Node(int val)
  {
    this->data=val;
    left=right;
  }
};

static int idx=-1;

Node* buildTree(vector<int> node)
{
    idx++;

    if(node[idx]==-1)
    {
        return NULL;
    }
    Node* newNode= new Node(node[idx]);

    newNode->left=buildTree(node);
    newNode->right=buildTree(node);

    return newNode;
}

void kthHelper(Node* root, int k , int currLevel)
{
    if(root==NULL)
    {
        return ;
    }
    if(currLevel==k)
    {
        cout<<root->data<<" ";
    }

    kthHelper(root->left, k, currLevel+1);
    kthHelper(root->right, k, currLevel+1);
}

void kthLevel(Node* root, int k)
{
kthHelper(root, k, 1);
cout<<endl;
}
    

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);

    kthLevel(root,3);
    return 0;
}