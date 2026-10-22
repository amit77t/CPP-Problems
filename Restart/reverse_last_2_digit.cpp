#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the three digit number";
    cin>>num;

    int sum=0;

    int count=2;

    while(count)
    {
        int lastDigit=num%10;
        sum=lastDigit+sum*10;
        num=num/10;
        count--;

    }

    cout<<sum;
    return 0;
}