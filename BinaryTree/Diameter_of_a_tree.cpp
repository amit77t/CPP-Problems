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

int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int leftSubTree=height(root->left);
    int rightSubTree=height(root->right);

    return max(leftSubTree, rightSubTree)+1;
}

int diameter(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int currDiameter=(height(root->left)+height(root->right))+1;

    int leftDiameter=diameter(root->left);
    int rightDiameter=diameter(root->right);

    return max(currDiameter,max(leftDiameter, rightDiameter))+1;
}

int main()
{
     vector<int> node = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node* root = buildTree(node);

  cout<<"Diameter of Tree is : "<<diameter(root)<<endl;
  return 0;

}