#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
      int a, b;

      cout<<"Enter 1st number a :  " ;
      cin >> a;
      cout<<"Enter 2st number b :  " ;
      cin >> b;

      a=a+b;
      b=a-b;
      a=a-b;

      cout<<" a = " <<a<< " " << "b = "<<b;





    return 0;
}