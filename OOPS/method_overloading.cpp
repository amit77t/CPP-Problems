#include<iostream>
using namespace std;

class Print{
  public:

   void show(int x)
   {
    cout<<"int: "<< x << endl;
   }
   void show(string str)
   {
    cout<<"string: "<<str<<endl;
   }
};

int main()
{
 
 Print p1;
 p1.show(4);
 p1.show("Venice");
 return 0;
}