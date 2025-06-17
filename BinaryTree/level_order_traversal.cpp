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


void levelOrderTraversal(Node * root)
{
  queue<Node*> q;

  if(root==NULL)
  {
    return ;
  }
  q.push(root);
  q.push(NULL);
  while(!q.empty())
  {
    Node* curr=q.front();
  q.pop();

    if(curr==NULL)
    {
        cout<<endl;
        if(q.empty())
        {
            break;
        }
        q.push(NULL); // to track next line
    }
    else{
          cout<< curr->data<<" ";

    if(curr->left!=NULL)
    {
        q.push(curr->left);
    }
    if(curr->right!=NULL)
    {
        q.push(curr->right);
    }
    }
   
    

  }
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);

    levelOrderTraversal(root);
    return 0;
}