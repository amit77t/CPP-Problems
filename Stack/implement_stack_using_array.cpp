#include<iostream>
using namespace std;

class Stack{

    int size;
    int *arr;
    int top;

public:
        Stack()
        {
            top=-1;
            size=1000;
            arr=new int[size];
        }
    
    void push(int x)
    {
        if(top==size-1)
        {
            cout<<"Stack Overflow Cannot push more element\n";
            return;
        }
        top++;
        arr[top]=x;
        cout<<x<<" is push into the stack\n";

    }

    int pop()
    {
        if(top==-1)
        {
           cout<<"Stack Underflow \n";
           return -1;
           
        }
        int x= arr[top];
        top--;
        cout<<x<<" is Pop from stack\n";
        return x;
    }

    int peekElememt()
    {
        if(top==-1)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        return arr[top];
    }


    bool isEmpty()
    {
        return (top<0);
    }
 
    void print()
    {
        if(top==-1)
        {
            cout<<"Stack is empty\n";
            return;
        }
        for(int i=0; i<=top; i++)
        {
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
};


int main()
{

    Stack s;

    // s.push(1);
    // s.push(2);
    // s.push(3);


    while(true)
    {

    cout<<"Enter the number to perform operation \n";
    cout<<"=> Press 1 for push element in stack \n=> Press 2 for pop element from stack \n=> Press 3 for print peek element of stack \n";
    cout<<"=> Press 4 to print all element of stack \n=> Press 5 to check stack empty or not\n=> Press 6 for exit from program\n";
    int n;
    cin>>n;
    
    
    
        switch (n)
        {
         case 1:
         {  int a;
            cout<<"enter the element to push \n";
            cin>>a;
            s.push(a);
            break;
        
         }
         case 2:
         {
            s.pop();
            break;
            
         }
         case 3:
         {
            if(s.peekElememt()!=-1)
            {
                cout<<"Peek element is "<<s.peekElememt()<<endl;
            }
           
            break;
        
         }
         case 4:
         {
            s.print();
            break;
            
         }
         
        case 5:
        {   
            if(s.isEmpty())
            {
                cout<<"Stack is empty \n";
            }
            else{
                cout<<"stack is not empty\n";
            }
            break;
        }
        case 6:
        {
            cout<<"you exit the program \n";
            return 0;
        }
        default:
          cout<<"Enter valid option \n";
            break;
        }
        
    }
   
      
    return 0;
}