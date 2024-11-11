#include<iostream>
using namespace std;

void insertionSort(char arr[], int n)
{
   for(int i=0; i<n; i++)
   {  int curr=arr[i];
      int prev=i-1;
     while(prev>=0 && arr[prev]>curr)
     {
        swap(arr[prev], arr[prev+1]);
        prev--;
     }
      arr[prev+1]=curr;
   }
  
  for(int i=0; i<n; i++)
  {
    cout<< arr[i] <<" ";
  }
  cout<<endl;
}


int main()
{
    char ch[6]={'f','e', 'd','m','g','a' };
    

    insertionSort(ch , 6);

    return 0;
}