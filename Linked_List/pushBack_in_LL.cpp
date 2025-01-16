#include<iostream>
using namespace std;

class Node {
   
   public:
   
   int data;
    Node* next;

   
    Node(int val)
    {
        data=val;
        next=NULL;
    }

};

class List {
     Node *head;
     Node  *tail;

public:
      List()
      {
        head=NULL;
        tail=NULL;
      }

    
    void push_back(int val)
    {
        Node * newNode = new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
    }
    else{
       tail->next=newNode;
       tail=newNode;
    }
    }


    void printList( )
    {
        Node * temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<< " -> ";
            temp=temp->next;
        }cout<<"NULL\n";
    }
    
};

int main(){
  List ll;


ll.push_back(5);
ll.push_back(7);
ll.push_back(8);
ll.push_back(9);

  ll.printList();


    return 0;
}