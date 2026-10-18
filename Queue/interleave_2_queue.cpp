#include<iostream>
#include<queue>
using namespace std;

void interleave(queue<int> &orig)
{
    int size=orig.size();

    queue<int> first;

    for(int i=0; i<size/2; i++)
{
    first.push(orig.front());
    orig.pop();
}

while(!first.empty())
{
    orig.push(first.front());
    first.pop();

    orig.push(orig.front());
    orig.pop();
    
}
}



int main()
{
     queue<int> q;

     for(int i=1; i<=10; i++)
     {
        q.push(i);
     }

     interleave(q);

     for(int i=1; i<=10; i++)
     {

        cout<<q.front()<<" ";
        q.pop();
     }

    return 0;
}