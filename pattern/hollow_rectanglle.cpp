#include<iostream>
using namespace std;
int main()
{
    
    for(int i=1; i<=4; i++)
    {cout<<"*";
        for(int j=1; j<=4-1; j++)
        {  
            if(i==1 || i==4 )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }cout<<"*";
        cout<<endl;
    }
    return 0;


}