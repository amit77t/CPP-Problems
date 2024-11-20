#include<iostream>
using namespace std;

void oddOreven(int n)
{
    if(!(n&1))
    {
        cout<<"Even"<<"\n";
    }
    else{
        cout<<"odd";
    }
}

int main()
{
    oddOreven(4);
    oddOreven(5);
    return 0;
}