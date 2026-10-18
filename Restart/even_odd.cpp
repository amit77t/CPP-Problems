#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int num;

    cout<<"Enter number : "<<endl;
    cin>>num;

    if(num%2==0)
    {
        cout<<"This even number "<<endl;
    }
    else{
        cout<<"This is odd number "<<endl;
        
    }
    return 0;
}