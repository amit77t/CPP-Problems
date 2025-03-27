#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{
    Node* head;
    Node* tail;
public:

    Queue()
    {
        head=NULL;   
        tail=NULL;     
        
    }


    void push(int data)
    {
        Node* newNode= new Node(data);

        if(head==NULL)
        {
            head=tail=newNode;
        }
        else{

            tail->next=newNode;
            tail=newNode;
        }

        
    }


    void pop()
    {
        if(empty())
        {
            cout<< "queue is empty";
            return;
        }

        Node * temp=head;
        head=head->next;
        delete temp;

    }

    int front()
    {
        if(empty())
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return head->data;
    }

    bool empty()
    {
        return head==NULL;
    }

};
    
int main()
{
     Queue q;
     q.push(1);
     q.push(2);
     q.push(3);

     q.push(4);

     while(!q.empty())
     {
        cout<<q.front()<<" ";
        q.pop();
     }







    return  0;
}

