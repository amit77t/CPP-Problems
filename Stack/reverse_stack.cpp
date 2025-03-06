#include<iostream>
#include<stack>

using namespace std;




void pushAtBottom(stack<int> &s, int n)
{
  if(s.empty())
  {
    s.push(n);
    return;
  }
  int temp=s.top();
  s.pop();
  pushAtBottom(s, n);
  s.push(temp);

}
void reverse(stack<int> &s )
{
    if(s.empty())
    {
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s, temp);
}

void disply(stack<int> s)
{
    while(!s.empty())
    {
         cout<<s.top()<<" ";
         s.pop();
    }
    cout<<endl;

}


int main()
{
  stack<int> s;
  s.push(3);
  s.push(2);
  s.push(1);
  disply(s);

  reverse(s);
  disply(s);


  
  return 0;
}