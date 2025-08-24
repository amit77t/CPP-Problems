#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrange(vector<int>& arr)
{
    vector<int> pos, neg;

    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]>0)
        {
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }

    vector<int> result;
    for(int i=0; i<pos.size(); i++)
    {
        result.push_back(pos[i]);
        result.push_back(neg[i]);
    }
    return result;

}


int main()
{
  vector<int> arr={3,1,-2,-5,2,-4};
  vector<int> ans=rearrange(arr);

  for(int x: ans)
  {
    cout<<x<<" ";
  }
  return 0;


}