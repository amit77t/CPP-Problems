#include<iostream>
using namespace std;


int toggleKthBit(int n, int k) {
    return (n ^ (1 << k));
}

int main()
{

    cout<<toggleKthBit(10, 1)<<endl;
return 0;
}