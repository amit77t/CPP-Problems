#include<iostream>
#include<string>
using namespace std;

void removeDup(string str, string ans, int i, int map[26])
{
  if(i==str.size())
  {
    cout<<"ans is: "<<ans<<endl;

  }
   
   char ch=str[i];
   int mapIdx=(int)(ch-'a');

   if(map[mapIdx]==true)
   {
    removeDup(str, ans, i+1, map);
   }
   else{
    map[mapIdx]=true;
    removeDup(str, ans+str[i], i+1, map);
   }
    
   
}

int main()
{
   string str="appnnaacollege";
   string ans=" ";
   int map[26]={false};

   removeDup(str, ans , 0, map);
  return 0;

}