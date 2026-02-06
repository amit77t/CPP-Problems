#include<iostream>
using namespace std;


class Node{
public:
    int data;
    Node *next;


    Node(int val)
    {
        data=val;
        next=NULL;
    }

    ~Node(){

         
        if(next!=NULL)
        {
            delete next;
            next=NULL;  
        }
    }
};

class List{
    Node* head;
    Node* tail;

  
public:

   List()
   {
    head=NULL;
    tail=NULL;
   }
   //destructor
   ~List()
   {  
    if(head!=NULL)
    {
      delete head;
      head=NULL;
    }
   }

   void push_front(int val)
    {
        Node * newNode = new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
        }
    else
    {
        newNode->next=head;
        head=newNode;
    }
    }

   void insert(int val, int pos)
   { 
    Node *newNode= new Node(val);
    Node *temp= head;
    
    for(int i=0; i<pos-1; i++)
    {
        if( temp==NULL)
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
        temp=temp->next;
    }
   
    newNode->next=temp->next;
    temp->next=newNode;

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
   
   // find size of list

   int getSize()
   {int cnt=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
    return cnt;

   }

   void removeNthLastNode(int n)
   { int size=getSize();

     Node* prev=head;
     for(int i=1; i<(size-n); i++)
     {
        prev=prev->next;
     }
     Node* toDel = prev->next;
     cout<<"going to delete : "<< toDel->data<< endl;

     prev->next=prev->next->next;

   }


   Node* reverseList(Node* head )
   { 
      
      Node* prev=NULL;
      Node* curr=head;
      Node* next;

      while(curr!=NULL)
      {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
      }
      return prev;

   }

   bool isPalindrome()
   {
    if(!head || !head->next) return true;
    
    Node* slow = head;
    Node* fast = head;
 
    while(fast && fast->next)
    {
     slow=slow->next;
     fast=fast->next->next;
    }
      
    Node* secondHalf=reverseList(slow);
    Node* firstHalf= head;
    Node* temp=secondHalf;

    while(secondHalf)
    {
        if(firstHalf->data != secondHalf->data)
        {
            return false;
        }
        firstHalf=firstHalf->next;
        secondHalf=secondHalf->next;

    }
    reverseList(temp);

    return true;

   }

  
   
};

int main()
{
    List ll;
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(2);
    // ll.push_front(1);

    // ll.printList();

    // ll.insert(100,2);

    ll.printList();

    if(ll.isPalindrome())
    {
        cout<<"The LinkedList is palindrome. \n";
    }
    else{
        cout<<"The LinkedList is  not palindrome. \n";
    }

    
    

   





 
    return 0;
}
