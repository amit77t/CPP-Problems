#include<iostream>
using namespace std;

int josephus(int n, int k)
{
    if(n==1) return 0;

    return (josephus(n-1,k) +k)% n;

}

int main()
{
    int n=5;
    int k=3;

    cout<<josephus(n, k);
    return 0;

    
}