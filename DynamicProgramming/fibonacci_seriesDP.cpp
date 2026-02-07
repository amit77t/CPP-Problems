#include<iostream>
#include<vector>
using namespace std;
// normal recursion O(2^n)
int fib(int n)
{
    if(n<=1) return n;

    return fib(n-1)+fib(n-2);

}

// using memoization Dp O(n)
int fibDp(int n, vector<int>&dp)
{
    if(n<=1) return n;

    if(dp[n]!=-1) return dp[n];

    dp[n]=fibDp(n-1, dp)+fibDp(n-2, dp);

    return dp[n];

}


int main()

{   int n=29;
    vector<int> dp(n+1, -1);
     
    cout<<fibDp(n, dp)<<endl;
}