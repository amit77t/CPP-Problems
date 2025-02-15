#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printList(list<int> ll)
{  
    list<int>::iterator itr;
   for(itr=ll.begin(); itr != ll.end(); itr++ )
   {
         cout<<(*itr)<<" -> ";
   }
   cout<<"NULL"<<endl;
}


int main()
{ 
   list<int> ll;

   ll.push_front(5);
   ll.push_front(4);
   ll.push_front(3);
   ll.push_front(2); 
   ll.push_front(1);

  printList(ll);

  cout<< "size of list : "<< ll.size()<<"\n";
  cout<<"head = "<< ll.front()<<"\n";
  cout<<"tail = "<< ll.back()<<"\n";


  cout<<"remove last element "<< endl;
  ll.pop_back();
  printList(ll);




    return 0;
}