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

static int idx=-1;
Node* buildTree(vector<int> node)
{
  idx++;

  if(node[idx]==-1)
  {
    return NULL;
  }

  Node* newNode=new Node(node[idx]);
  newNode->left=buildTree(node);
  newNode->right=buildTree(node);

  return newNode;
}

int count(Node* root)
{
  if(root==NULL)
  {
    return 0;
  }

  int leftNode=count(root->left);
  int rightNode=count(root->right);

  return leftNode+rightNode+1;
}

int main()
{
   vector<int> node = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node* root = buildTree(node);

  cout<< " Number of Nodes in Tree : "<< count(root)<<endl;
    return 0;

}
