#include<iostream>
#include<string>
using namespace std;

class User{

   int  id;
   string password;
   public:
     string userName;
   User(int id)
   
   {
      this->id=id;
   }
   
  string getPassword()
  {
    return password;
  }
  void setPassword(string password)
  {
    this->password=password;
  }
};


int main()
{
   User user1(101);
   user1.userName="mike";
   user1.setPassword("abcd");

   cout<<"username : " << user1.userName <<endl;
   cout<<"password : "<< user1.getPassword()<<endl;
  return 0;
}
