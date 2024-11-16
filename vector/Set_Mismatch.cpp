#include<iostream>
using namespace std;
#include<vector>

vector<int> setMismatch(vector<int>& arr)
 {

   vector<int> ans ;
   int n=arr.size();
    
    vector<bool> isPresent(n+1, false);
    
    for(int i=0; i<n; i++){
    
       if(isPresent[arr[i]]){
        ans.push_back(arr[i]);
       }
    
      
    isPresent[arr[i]]=true; 
}

for(int i=1 ; i<isPresent.size(); i++)
{
    if(!isPresent[i])
    {
        ans.push_back(i);
        break;
    }
}

return ans;
 
}


int main()
{
   vector<int> vec={1,2,2,4};
   vector<int> ans =setMismatch(vec);
  setMismatch(vec);
   cout<<ans[0]<<" "<<ans[1]<< " "<<endl;
   return 0;

}