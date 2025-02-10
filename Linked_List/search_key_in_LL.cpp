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
   //Pop front element from list

   void pop_front()
   {
    Node * temp= head;
    head=head->next;
    temp->next=NULL;

    delete temp;
   }

   int find_key(int key)
   {
    Node * temp=head;
    int count=0;
    while(temp!=NULL)
    {
        if(key==temp->data)
        {
            return count;
        }
       
        temp=temp->next;
        count++;
    }
    return -1;
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


int main()
{
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printList();

    ll.insert(100,2);

    ll.printList();
    ll.pop_front();
    ll.printList();

    cout<< ll.find_key(4)<< endl;



    return 0;
}
