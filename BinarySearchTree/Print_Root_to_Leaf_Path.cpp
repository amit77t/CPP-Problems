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
void pathhelper(Node* root , vector<int> &path)
{
   if(root==NULL)
   {
    return;
   }  

   path.push_back(root->data);

   if(root->left==NULL && root->right==NULL)
   {
       prinPath(path);
       path.pop_back();
       return;
   }

   pathhelper(root->left, path);
   
   pathhelper(root->right, path);

   path.pop_back();
} 


void rootToleafPath(Node* root)
{
   vector<int> path;
   pathhelper(root, path);

   

}

int main()
{
int arr[9]= {8,5,3,1,4,6,10,11,14};
    //  int size=sizeof(arr)/sizeof(int);
     Node* root=buildBst(arr,9);
     rootToleafPath(root);

    return 0;
}