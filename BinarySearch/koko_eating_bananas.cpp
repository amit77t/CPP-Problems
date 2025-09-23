#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int findMax(vector<int> &v)
{
    int maxi=INT16_MIN;
    int n=v.size();

    for(int i=0; i<n; i++)
    {
        maxi=max(maxi, v[i]);
    }
    return maxi;
}


int calculateTotalHours(vector<int>& v, int h)
{
    int totalH=0;
    int n=v.size();

    for(int i=0; i<n; i++)
    {
        totalH+=ceil((double)(v[i])/(double)(h));

    }
    return totalH;
}


int minimumRateToEatBananas(vector<int>&v, int h)
{
    int low=1; int high=findMax(v);

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        int totalH=calculateTotalHours(v, mid);


        if(totalH<=h)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
int main()
{
    vector<int> v = {7, 15, 6, 3}; int h = 8; 
    int ans = minimumRateToEatBananas(v, h); 
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n"; 
    return 0;

}