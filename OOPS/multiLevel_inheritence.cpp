#include<iostream>
using namespace std;

class Animal {
 public:

 void eat()
 {
    cout<<"eats \n";

 } 
 void breathe()
 {
    cout<<"breathes \n";
 }



};
class Mammal:public Animal{
   public:
    void blood()
    {
        cout<<"warm-blood\n";
    }
};
class Dog:public Mammal{
    
  public:
    void tailwag()
    {
        cout<<"tailwag\n";
    }
};


int main()
{ 
    Dog d1;
    d1.breathe();
    d1.eat();
    d1.blood();
    d1.tailwag();
    return 0;
}