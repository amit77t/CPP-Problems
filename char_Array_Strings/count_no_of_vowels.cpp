#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="Applea";
    int count=0;

    for(char ch : str)
    {
        if(ch == 'a' || ch =='e' || ch=='i' || ch == 'o' || ch =='u' || ch=='A' ||ch == 'E' || ch =='I' || ch=='O' || ch=='U')
        {
            count++;
        }


    }
    cout<<"The no. of vowels in string  = "<<count ;

    return 0;
}