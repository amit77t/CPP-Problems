#include<iostream>
#include<vector>
using namespace std;


template<class T>
class Stack{
   vector<T> vec;

public:
    void push(T val)
    {
        vec.push_back(val);
    }
 
    void pop()
    {  
       if(isEmpty()){
            cout<<" stack is empty";
            return;
        }
        vec.pop_back();
    }

    int top()
    {   
        //if(isEmpty())
    //     {
    //         return -1;
    //     }

        int lastIndx= vec.size()-1;
        return vec[lastIndx];
    }
  bool isEmpty()
  { 
    return  vec.size() == 0;
         
  }

};

int main()
{
    Stack<char> s;
    // s.push(3);
    // s.push(2);
    // s.push(1);
    s.push('c');
    s.push('b');
    s.push('a');


    while(!s.isEmpty())
    {
        cout<< s.top()<< " ";
        s.pop();
    }
  cout<<endl;
    return 0;
}