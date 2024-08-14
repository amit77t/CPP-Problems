#include<iostream>
using namespace std;
int main()
{   int n, count=0;
    cout<<"enter the number"<<endl;
    cin>>n;

    while(n>0)
    {
        int r=n%10;
        count++;
        n=n/10;
        
    }
    cout<<"the digit in the number is "<< count;
    return 0;


}