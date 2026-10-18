#include<iostream>
#include<deque>

#include<queue>

using namespace std;

class QueueUsingDeque
{
     deque<int> dq;
     public:

     void enqueue(int value) {
         dq.push_back(value);
     }

     void dequeue() {
         if (!dq.empty()) {
             dq.pop_front();
         }
     }

     int front() {
         if (!dq.empty()) {
             return dq.front();
         }
         throw out_of_range("Queue is empty");
     }

     bool isEmpty() {
         return dq.empty();
     }

     int size() {
         return dq.size();
     }


};
int main()
{  QueueUsingDeque q;
    q.enqueue(10);
    q.enqueue(20);
    cout << "Front element: " << q.front() << endl;
    q.dequeue();
    cout << "Front element after dequeue: " << q.front() << endl;
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Queue size: " << q.size() << endl;


   return 0;
}