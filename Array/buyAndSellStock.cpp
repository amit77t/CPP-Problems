#include<iostream>
using namespace std;

void maxProfit(int prices[], int n)
{
     int bestBuy[100000];
     bestBuy[0]=__INT_MAX__;
     for(int i=1; i<n ;i++)
     {
        bestBuy[i]=min(bestBuy[i-1], prices[i-1]);
     }
     int maxProfit=0;
     for(int i=0; i<n ;i++)
     {
        int currProfit=prices[i]-bestBuy[i];
        maxProfit=max(maxProfit, currProfit);

     }

     cout<<"max- profit = "<< maxProfit <<endl;
}


int main()
{
 int prices[6]={7, 1,5,3,6,4};
 int size=sizeof(prices)/sizeof(int);
 maxProfit(prices, size);
 return 0;
}

