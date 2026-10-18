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

Node* getInoderSuccessor(Node* root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }

    return root; // IS
}

Node* delNode(Node* root, int val)
{
    if(root==NULL) return NULL;

    if(val<root->data){
        root->left=delNode(root->left, val);
    }
    else if(val>root->data){
        root->right=delNode(root->right, val);
    }
    else{
        //root==value

        //case 1 : 0 children

        if(root->left==NULL && root->right==NULL)
        {
            delete(root);
            return NULL;
        }

        // case 2: 1 child
        if(root->left==NULL || root->right==NULL)
        {
            return root->left==NULL ? root->right: root->left;
        }

        // case 3: 2 child

        Node* IS =getInoderSuccessor(root->right);
        
            root->data=IS->data;
            root->right=delNode(root->right, IS->data);  // case1, cas2
            return root;
        
        return root;
    }
       
}

int main()
{
     int arr[9]= {1,3,4,5,6,8,10,11,14};
     int size=sizeof(arr)/sizeof(int);
     Node* root=buildBST(arr,size);
     
     inorder(root);
     cout<<endl;
     delNode(root, 5);
     inorder(root);
     cout<<endl;

    return 0;
}