#include<iostream>
using namespace std;
#include<vector>

int maxWater(vector<int> height)
{   
      int left=0, right=height.size()-1;
      int max_area=0;
      while(left<right)
      {
         int curr_area=min(height[left],height[right])*(right-left);
         max_area=max(max_area,curr_area);
         if(height[left]<height[right])
         {
            left++;
         }
         else{
            right--;
         }
      }

      return max_area;

    
}


int main()
{
   vector <int> heights={1,8,6,2,5,4,8,3,7};
   cout<<maxWater(heights)<<endl;

   return 0;
}