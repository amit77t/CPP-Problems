#include<iostream>
using namespace std;

class BankAccount{
    private:
     int accountNumber;
     double balace;
  public:
    BankAccount(int an, int b)
    {
        accountNumber=an;
        balace=b;
    }

    
      
      void deposit(double amount)
      { 
        
         balace+=amount;
      }
     void withdraw(double amount)

     {
         if(amount<=balace)
         {
            balace-=amount;
         }
         else{
            cout<<"No sufficient balance for this withdrawal. \n";
         }
     } 

     double getBalance()
     {
        return balace;
     }

};



int main()
{
 BankAccount myAccount(123456, 500.0);
 myAccount.deposit(150.0);
 myAccount.withdraw(150.0);

 cout<<"current balance : Rs."<< myAccount.getBalance()<<endl;
return 0;
}