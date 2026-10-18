#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

class List{

public:


    Node* head;
    Node* tail;

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


   
 
};

Node* swappingNode(Node* head, int a, int b)
{
    if(head==NULL || (a==b))
     return NULL;

     Node* curr1=head , *prev1=NULL;
     Node* curr2=head, *prev2=NULL;

     while(curr1 && curr1->data !=a)
     {
        prev1=curr1;
        curr1=curr1->next;
     }
     
     while(curr2 && curr2->data !=b)
     {
        prev2=curr2;
        curr2=curr2->next;
     }

     if( !a || !b)
     {
        return head;
     }

     if(prev1==NULL)
     {
        head=curr2;
     }
     else{
        prev1->next=curr2;
     }

     if(prev2==NULL)
     {
        head=curr1;
     }
     else{
        prev2->next=curr1;
     }

     Node* temp = curr1->next;
     curr1->next= curr2->next;
     curr2->next= temp;


     return head;
}




void printList(Node* head )
{
    Node * temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<< " -> ";
        temp=temp->next;
    }cout<<"NULL\n";
}


int main()
{
   List ll;

   ll.push_back(8);
   ll.push_back(12);
   ll.push_back(10);
   ll.push_back(5);
   ll.push_back(4);
   ll.push_back(1);
   ll.push_back(6);
   printList(ll.head);

   ll.head=swappingNode(ll.head, 10,6);
   printList(ll.head);





   


    return 0;
}