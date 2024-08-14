#include<iostream>
using namespace std;
int main()
{
    int y;
     cout<<"Enter the year";
     cin>>y;

     if(y%400==0)
     {
        cout<<"This is a leap year \n";
     }
    else if(y%100==0)
     {
        cout<<"This is not a leap year \n";
     }
     else if(y%4==0)
     {
        cout<<"This is  a leap year \n";
     }
     else 
     {
        cout<<"This is not a leap year \n";
     }

     return 0;
}