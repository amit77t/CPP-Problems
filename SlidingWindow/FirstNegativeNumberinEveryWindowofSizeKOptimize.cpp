#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

vector<int> firstNegative(vector<int>& nums, int k)
{
    int i=0, j=0;
    
     queue<int> q;

     while(j<nums.size())
     {
        if(nums[j]<0)
        {
            q.push(j);
        }
        if(j-i+1 < k ) j++;

        else if(j-i+1 ==k)
        {
            if(!q.empty())
            {
                ans.push_back(nums[q.front()]);
            }
            else{
                ans.push_back(0);
            }

            if(!q.empty() && q.front()==i)
            {
                q.pop();
            }
            i++;
            j++;
        }
     }

     return ans;
     
}

int main()
{
return 0;
}