#include<iostream>
using namespace std;
class Person{
   protected:
   string name;
   int age;
  
   public:

   
   Person(string n, int a)
   {
    name=n;
    age=a;
   }

};

class Student :public Person{
private: 
    string studentId;
 
 public:   

 Student(string n, int a, string id):Person(n,a){
    studentId=id;
 }
 void displayStudentInfo()
    {
       cout<<"student name : "<<this->name <<endl;
       cout<<"age :"<<this->age<<endl;
       cout<<"student id :"<<this->studentId<<endl;
    }
};







int main()
{

  Student student("Alice",20,"s1234");
  student.displayStudentInfo();
return 0;
}