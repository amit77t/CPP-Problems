#include<iostream>
using namespace std;
void counter()
{
    static int count=0;
    cout<<count++<<"\n";
}

int main()
{
     counter();
     counter();
     counter();

return 0;
}