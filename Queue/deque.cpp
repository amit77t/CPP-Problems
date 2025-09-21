#include<iostream>
#include<deque>
using namespace std;

int main(){


    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_front(5);
    dq.pop_back();
    dq.pop_front();



    cout<<dq.front()<<"\n";
    cout<<dq.back()<<"\n";
    

   


    return 0;


}