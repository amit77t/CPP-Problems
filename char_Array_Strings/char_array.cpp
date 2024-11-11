#include<iostream>

#include <string.h>
using namespace std;

int main()
{
   char arr[50];
//    cin>>arr;

//    cout<<"your word " <<arr;
   
  
  cin.getline(arr, 30);
  cout<<arr; 
  cout<<"the lenght is = "<<strlen(arr);

    return 0;
}