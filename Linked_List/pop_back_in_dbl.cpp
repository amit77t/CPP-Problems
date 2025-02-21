#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
      Node* prev;

      Node(int val)
      {
        data=val;
        next=prev=NULL;
      }
};



class DoublyList{
    public:
      Node* head;
      Node* tail;
      DoublyList()
      {
        head=tail=NULL;
      }
     
      void push_front(int val)
      {
        Node* newNode= new Node(val);
        if(head== NULL)
        {
            head= tail = newNode;
        }
    else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }

      }

    void printList()
    {
        Node* temp= head;
        while(temp!=NULL)
        {
            cout<< temp->data<<"<=>";
            temp=temp->next;
            
        }
        cout<<"NULL"<<endl;
    }
 
    void pop_front()
    {
        Node* temp= head;
        head=head->next;
        if(head!=NULL)
        {
            head->prev=NULL;
        }
        temp->next=NULL;
        delete temp;
    }
    void push_back(int val)
    {
        Node* newNode= new Node(val);

        if(head==NULL)
        {
            head= tail= newNode;
        }
        else{
            tail->next=newNode;
            newNode->prev=tail;
   
            tail=newNode;
        }
         

        
    
    }

    void pop_back()
    {
        Node* temp = head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        tail->prev=NULL;
        delete tail;
         tail=temp;
    }
};






int main()
{

 DoublyList dbl;

 dbl.push_front(4);
 dbl.push_front(3);

 dbl.push_front(2);
 dbl.push_front(1);

 dbl.printList();
 


 

 dbl.push_back(55);
 dbl.printList();
dbl.pop_back();
dbl.printList();
dbl.pop_back();
dbl.printList();

    return 0;
}