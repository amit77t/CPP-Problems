#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &s, int val )
{
    if(s.empty())
    {
        s.push(val);
        return;
    }

    int  temp=s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(temp);

   
}
 
void print(stack<int> s)
{
  while(!s.empty())
  {
    cout<<s.top()<<"\n";
    s.pop();
  }
  cout<<endl;
}

int main()
{  

    stack<int> s;
     
 pushAtBottom(s, 4);
 pushAtBottom(s, 5);
//  pushAtBottom(s, 6);
 
  print(s);
    
    return 0;
}