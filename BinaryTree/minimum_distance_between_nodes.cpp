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

bool rootToNodePath(Node* root, int n, vector<int>&path)
{
    if(root==NULL)
    {
        return false;
    }
    path.push_back(root->data);
    if(root->data==n)
    {
        return true;
    }

    int isLeft=rootToNodePath(root->left,n, path);
    int isRight=rootToNodePath(root->right, n, path);

    if(isLeft || isRight)
    {
        return true;
    }

    path.pop_back();
    return false;
}

Node* LCA(Node* root, int n1, int n2)
{
    vector<int> path1;
    vector<int> path2;

    rootToNodePath(root,n1, path1);
    rootToNodePath(root, n2, path2);

    int lca=-1;

    for(int i=0, j=0; i<path1.size() && j<path2.size(); i++, j++)
    {
        if(path1[i]!=path2[j])
        {
            return lca;
        }
        lca=path1[i];
    }
}

int dist(Node* root, int n)
{
if(root==NULL)
{
    return -1;
}

if(root->data==n)
{
    return 0;
}

int leftDist=dist(root->left, n);
if(leftDist!=-1)
{
    return leftDist+1;

}
int rightDist=dist(root->right, n);
if(rightDist!=-1)
{
    return rightDist+1;
}

return -1;
}

int minDist(Node* root, int n1, int n2)
{
    Node* lca=LCA(root, n1, n2);

    int dist1=dist(lca, n1);
    int dist2=dist(lca, n2);

    return dist1+dist2;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);

    int n1=4; int n2=6; 

    cout<<"Minimum distance = "<<minDist(root, n1, n2);
    return 0;
}