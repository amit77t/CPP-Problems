#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any character : "<<endl;
    cin>>ch;
    
    int pos=int(ch);
    
    
    
    
    if(pos>= 97 && pos <110)
    
    {
        cout<<"character lie between a-m";
    }
    else if(pos>=110 && pos <123)
    {
        cout<<"character lie between n-z";
    }
    else{
        cout<<"please enter valid character";
    }
    
    return 0;
    
}