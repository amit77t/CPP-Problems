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

pair<int, int> diameter(Node* root){

    if(root==NULL)
    {
        return make_pair(0, 0);
    }
    
    pair<int ,int> leftInfo=diameter(root->left);
    pair<int, int> rightInfo=diameter(root->right);

    int currDia= leftInfo.second+rightInfo.second+1;
    int finalDia= max(currDia,max(leftInfo.first,rightInfo.first));
    int finalHt=max(leftInfo.second, rightInfo.second)+1;


    return make_pair(finalDia, finalHt);
}

int main()
{
     vector<int> node = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node* root = buildTree(node);

  cout<<"Diameter of Tree is : "<<diameter(root).first<<endl;
  return 0;

}