#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& arr, vector<int>& curr,int sum, int idx, int k)
{
   
     if(arr.size()==idx)
     {  if(sum==k)
        {
              for(int x: curr)
        {
            cout<<x<<" ";

        }
        }
       
        cout<<endl;
        return ;
     }


     curr.push_back(arr[idx]);

     print(arr,curr, arr[idx]+sum ,idx+1,k);
     curr.pop_back();

     print(arr, curr,  sum, idx+1,k);

   
}


int main()
{

   vector<int> arr={3,1,2};
   vector<int> v;

   print(arr, v, 0,0,3);


  

}