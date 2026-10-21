#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number "<<endl;

    cin>>n;

    int lastDigit=n%10;

    cout<<lastDigit <<endl;
    
    return 0;
}