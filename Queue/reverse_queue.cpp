#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> &orig)
{
    stack<int> s;
    while(!orig.empty())
    {
        s.push(orig.front());
        orig.pop();

    }

    while(!s.empty())
    {
        orig.push(s.top());
        s.pop();
    }
}

int main()
{

    queue<int> q;
    for(int i=1; i<=5; i++)
    {
        q.push(i);
    }

    reverse(q);
   
    for(int i=1; i<=5; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    
    return 0;
}