#include<iostream>
using namespace std;

bool powerOf2(int num)
{
    if(!((num) & (num-1)))
    {
       return true;
    }

    else{
        
        return false;
    }
}



int main()
{
  cout<<powerOf2(4)<<endl;
  cout<<powerOf2(16)<<endl;
  cout<<powerOf2(8)<<endl;
  cout<<powerOf2(19)<<endl;
   cout<<powerOf2(23)<<endl;
  return 0;
}