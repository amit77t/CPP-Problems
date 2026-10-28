#include<iostream>
using namespace std;

int main()
{
    int hour ;
    cout<<"Enter the time in 24 Hour format ";
    cin>>hour;
    
    if(hour>=0 && hour <12)
    {
        cout<<"Good Morning";
    }
    else if(hour>=12 && hour < 18)
    {
        cout<<"Good AfterNoon";
    }
    else if(hour>=18 && hour <22)
    {
        cout<<"Good Evening";
    }
    else if(hour>=22 && hour <24)
    {
        cout<<"Good Night ";
    }
    else{
        cout<<"Please enter valid time ";
    }
    
    
    
    return 0;
}