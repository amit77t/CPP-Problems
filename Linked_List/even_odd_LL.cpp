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



Node* separateEvenOdd(Node* head)
{
      Node* evenHead=NULL, *evenTail=NULL;
      Node* oddHead=NULL, *oddTail=NULL;

      Node* temp=head;

      if(!head){
          return NULL;        
      }

      while(temp!=NULL)
      {
        if(temp->data %2 ==0)
        {
            if(evenHead==NULL)
            {
                evenHead=evenTail=temp;
                
            }
            else{
                 evenTail->next=temp;
                 evenTail=evenTail->next;
            }
        }
        else{
            if(oddHead==NULL)
            {
                oddHead=oddTail=temp;
            }
            else{

                oddTail->next=temp;
                oddTail=oddTail->next;
            }
        }
        temp=temp->next;
      }

    if(evenHead)
    {
        evenTail->next=oddHead;
    }

    if(oddHead)
    {
        oddTail->next=NULL;
    }

    return evenHead? evenHead : oddHead;

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
 ll.head=separateEvenOdd(ll.head);

    printList(ll.head);
   


    return 0;
}