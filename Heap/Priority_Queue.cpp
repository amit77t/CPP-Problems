#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq1;  // max
      priority_queue<int, vector<int>, greater<int>> pq;  //min 
    

    pq.push(5);
    pq.push(8);
    pq.push(1);
    pq.push(12);

    cout<<"Top: "<<pq.top()<<endl;
    return 0;

}