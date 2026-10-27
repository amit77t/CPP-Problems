#include<iostream>
using namespace std;

int main()
{   
    int marks;
    cout<<"Enter your marks : ";
    
    cin>>marks;
    
    
    
    if(marks>=90 && marks <100)
    {
        cout<<"Grade A";
    }
    else if(marks>=80 && marks<90 )
    {
        cout<<"Grade B";
    }
    else if(marks>=70 && marks<80)
    {
        cout<<"Grade C";
    }
    else if(marks>=60 &&  marks<70)
    {
        cout<<"Grade D";
    }
    else{
        cout<<"Grade E";
    }
    
    return 0;
}