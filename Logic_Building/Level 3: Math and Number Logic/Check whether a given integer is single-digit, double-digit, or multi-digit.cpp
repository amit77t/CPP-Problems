#include<iostream>
using namespace std;

int main()
{
    int num;
    
    cout<<"Enter the number: ";
    cin>>num;
    int count=0;
    
    
    while(num!=0)
    {
        int lastDigit=num;
        count++;
        num=num/10;
    }
    
    if(count==1)
    {
        cout<<"You entered single digit number";
        
    }
    else if(count==2)
    {
         cout<<"You entered double digit number";
    }
    else{
         cout<<"You entered multi digit number";
    }
    
    
    return 0;
    
}