#include<iostream>
#include<vector>
#include<queue>
using namespace std;uu7


vector<int> slidingMaximum(vector<int>& arr, int k)
{  
   vector<int> ans;  
        priority_queue<pair<int, int>> pq;
        for(int i=0; i<k ; i++)
        {
            pq.push(make_pair(nums[i],i));
        }

        ans.push_back(pq.top().first);

        for(int i=k ; i<nums.size(); i++)
        {
            while(!pq.empty()&& pq.top().second<=(i-k))
            {
                pq.pop();
            }
            pq.push(make_pair(nums[i], i));
           ans.push_back(pq.top().first);

        }
        return ans;

}

int mian()
{
  vector<int> arr={1,3,-1,-3,5,3,6,7};


}