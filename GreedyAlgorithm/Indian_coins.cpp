#include<iostream>
#include<vector>
using namespace std;

int minCoin(vector<int> coins , int V){

    int ans=0;
     int n=coins.size();
     
        for(int i=n-1; i>=0 && V>0 ; i--)
        {
            if(V>= coins[i])
            {
                ans+=V/coins[i];
                V=V%coins[i];
            }
        }

    
cout<<"Minimum coin : ";
     return ans;

      

}



int main()
{
  vector<int> coins={1,2,5,10,20,50,100,500,2000};
  
  cout<<minCoin(coins, 590);

    return 0;
}
