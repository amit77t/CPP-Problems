#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter two numbers ";
    
    cin>>a>>b;
    
    
    if( a %2==0  && b%2==0)
    {
        cout<<"Both are Even numbers";
    }
    
    else if(a%2==0 || b%2==0  )
    {
        cout<<"one is odd one is even ";
    }
    else{
        cout<<"both are odd ";
    }
    
    return 0;
}