#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumAbsoluteDiff(vector<int> a, vector<int> b)
{
   sort(a.begin(), a.end());
   sort(b.begin(), b.end());

  int  absDiff=0;

   for(int i=0; i<a.size(); i++)
   {
     absDiff+=abs(a[i]-b[i]);

   }

   return absDiff;

}



int main()
{
    vector<int> A={4,1,8,7};
    vector<int> B={2,3,6,5};

  cout<<" Maximum Absolute difference is : "<<maximumAbsoluteDiff(A,B);
    
    return 0;


}