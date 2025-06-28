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

void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);


}

Node* insert(Node* root, int val)
{
    if(root==NULL)
    {
        root=new Node(val);
        return root;
    }

    if(val< root->data)
    {
         root->left=insert(root->left, val);
    }
    else{
        root->right=insert(root->right, val);
    }
    return root;
}

Node* buildBST(int arr[], int n)
{
    Node* root=NULL;
    for(int i=0; i<n ; i++)
    {
        root=insert(root,arr[i]);
    }
    return root;
}

bool search(Node* root, int key)
{
    if(root==NULL)
      return false;
    
    if(root->data==key)
      return true;

    if(key<root->data)
    {
        return search(root->left,key);
    }
    else{
        return search(root->right, key);
    }
}

int main()
{
     int arr[6]= {5,1,3,4,2,7};
     int size=sizeof(arr)/sizeof(int);
     Node* root=buildBST(arr,size);
     cout<<search(root, 3)<<endl;

    return 0;
}