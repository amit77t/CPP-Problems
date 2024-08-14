#include<iostream>
using namespace std;
int main()
{
    int n ,rev=0;
    cout<<"enter the number"<<endl;
    cin>>n;

    int n1=n;

    while(n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(n1==rev)
    {
        cout<<"yes this is palindrome number";
    }
    else{
        cout<<"it is not palindrome number";
    }
    return 0;
}