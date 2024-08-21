#include<iostream>

using namespace std;

int sum(int n)
{  int s=0;
    
    while(n!=0)
    {
        int r=n%10;
        s=s+r;
        n=n/10;
    }
    return s;


}


int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    
    cout<<sum(n)<<endl;
  return 0;

}