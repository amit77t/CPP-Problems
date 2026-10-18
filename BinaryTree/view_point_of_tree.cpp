#include<iostream>
#include<vector>
#include<map>

using namespace std;
 class Node{
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


 Node* buildTree(Node* node)
 {
       idx++;

       if(node[idx]==-1)
       {
        return NULL;
       }

       Node* newNode=new Node(node[idx]);

       newNode->left=buildTree(root->left);
       newNode->right=buildTree(root->right);

       return newNode;
 }



int main()
{
    return 0;
}
