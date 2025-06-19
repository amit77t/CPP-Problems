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

bool isIdentical(Node* root1, Node* root2)
{
     if(root1==NULL && root2==NULL)
    {
        return true;
    }
    else if(root1==NULL || root2==NULL)
    {
        return false;
    }

    if(root1->data!= root2->data)
    {
        return false;
    }
    return isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
}


bool isSubTree(Node* root, Node* subRoot)
{
    if(root==NULL && subRoot==NULL)
    {
        return true;
    }
    else if(root==NULL || subRoot==NULL)
    {
        return false;
    }

    if(root->data==subRoot->data)
    {
          if(isIdentical(root, subRoot))
          {
            return true;
          }
    }
   int leftSubTree= isSubTree(root->left, subRoot);
     if(!leftSubTree)
     {
           return isSubTree(root->right, subRoot);
     } 

}

int main()
{

  vector<int> node = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node* root =buildTree(node);

  Node* subRoot=new Node(2);
  subRoot->left=new Node(4);
  subRoot->right=new Node(5);

  cout<< isSubTree(root, subRoot)<< endl;

  
  

    return 0;
}
