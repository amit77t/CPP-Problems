#include<iostream>
#include<string>
using namespace std;

void reverseString(string &str)
{
     int n=str.size();

     for(int i=0; i<n/2; i++)
     {
        swap(str[i], str[n-i-1]);
     }
      
     cout<<str<<endl;
}


int main()
{
  string  str="strangerThings";

  cout<<" Before Reverse = "<< str<< endl;
  cout<<" After Reverse = ";
  reverseString(str);
  return 0;

}
