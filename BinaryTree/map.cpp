#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<int, string> m;

    m[101]="mike";
    m[102]="eleven";
    m[103]="max";

    for(auto it: m)
    {
        cout<<"key = "<< it.first<<" , "<< " value = "<<it.second<<endl;

     
    }
       return 0;
}