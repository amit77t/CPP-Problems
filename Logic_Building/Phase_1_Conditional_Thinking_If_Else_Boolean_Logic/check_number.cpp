#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void checkNum(int n)
{
    if(n>0)
    {
        cout<<"You enter a positive number";
    }
    else if(n<0)
    {
        cout<<"You enter a negative number";
    }
    else{
        cout<<"You enter zero";
    }
}






int main()
{ 

    int num;
    cout<<"Enter a number : ";
    cin>>num;

    checkNum(num);
    
    return 0;
}