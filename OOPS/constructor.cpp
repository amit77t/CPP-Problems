#include<iostream>
#include<string>
using namespace std;

class Car{

   string name;
   string color;
   public:
   Car(string name, string color)
   
   {
      cout<<"Constructor is called object being created ";
      this->name= name;
      this->color=color;
   }
    void start()
    {
        cout<< "car has to start..\n";
    }

};


int main()
{
   Car c1("Audi 345 ","VentaBlack");
  return 0;
}
