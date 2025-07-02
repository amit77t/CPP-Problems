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


void printRange(Node* root, int start, int end)
{
    if(root==NULL) return ;

    if(start<=root->data&& root->data<=end)
    {
        
        printRange(root->left, start, end);
        cout<<root->data<<" ";
        printRange(root->right, start, end);
    }
    else if(root->data<start)
    {
        printRange(root->right, start, end);
    }
    else{
        printRange(root->left,start,end);
    }
}

int main()
{
int arr[9]= {8,5,3,1,4,6,10,11,14};
    //  int size=sizeof(arr)/sizeof(int);
     Node* root=buildBst(arr,9);
     printRange(root, 5, 12 );
     cout<<endl;

    return 0;
}