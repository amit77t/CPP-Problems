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




Node* insert(Node* root, int val)
{
    if(root==NULL)
    {
        root=new Node(val);
        return root;
    }

    if(val<root->data)
    {
        root->left=insert(root->left, val);

    }
    else{
        root->right=insert(root->right, val);
    }

    return root;

}
Node* buildBst(int arr[], int n)
{ 
     Node* root=NULL;

     for(int i=0; i<n ; i++)
     {
        root=insert(root,arr[i]);
     }

     return root;
}
void prinPath(vector<int> path)
{
    for(int i=0; i<path.size(); i++)
    {
        cout<<path[i]<<" ";
    }
    cout<<endl;
}
bool helper(Node* root, Node* min, Node* max)
{
    if(root==NULL) return true;

    if(min!=NULL && root->data < min->data)
    {
        return false;
    }
     if(max!=NULL && root->data > max->data)
    {
        return false;
    }

    return helper(root->left, min, root) && helper(root->right, root, max);
}
bool validBST(Node* root)
{
    return helper(root, NULL, NULL);
}
int main()
{
int arr[9]= {8,5,3,1,4,6,10,11,14};
    //  int size=sizeof(arr)/sizeof(int);
     Node* root=buildBst(arr,9);
    cout<<validBST(root)<<endl;

    return 0;
}