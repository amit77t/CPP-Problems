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

int kthAncestor(Node* root, int node , int k)
{
    if(root==NULL)
    {
    return -1;
    }

    if(root->data==node)
    {
        return 0;
    }

    int leftDist=kthAncestor(root->left,node , k);
    int rightDist=kthAncestor(root->right, node, k);

    if(leftDist==-1 && rightDist==-1)
    {
        return -1;
    }

    int validVal= leftDist == -1? rightDist : leftDist;

    if(validVal+1==k)
    {
        cout<<" kth ancestor: "<< root->data<<endl;

    }
    return validVal+1;


}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);

    kthAncestor(root, 5,2);
    return 0;
}