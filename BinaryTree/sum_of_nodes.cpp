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



int sumOfNode(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int leftSum=sumOfNode(root->left);
    int rightSum=sumOfNode(root->right);

    return leftSum+rightSum+root->data;
}

int main()
{
   vector<int> node = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node* root = buildTree(node);

 
  cout<<"Sum of nodes in Tree : "<< sumOfNode(root)<<endl;
    return 0;

}
