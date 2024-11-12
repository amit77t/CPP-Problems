#include<iostream>
using namespace std;

void fuctionArr()
{
      int size;
      cin>>size;
    int *ptr= new int[size];
  int x=1;

  for(int i=0; i<size; i++)
  {
   ptr[i]=x;
   cout<<ptr[i]<<" ";
   x++;
  }
  cout<< endl;


    delete [] ptr;
}
int main()
{
  fuctionArr();
  return 0;
}