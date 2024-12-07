#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> arr, int i, int target)
{
  if(i==arr.size())
  {
    return -1;
  }
  if(arr[i]==target)
  {
    return i;
  }

  return firstOcc(arr, i+1, target);
}

int main()
{
    vector<int> arr={1,2,3,3,3,4};
    cout<<firstOcc(arr,0,3)<<endl;
    return 0;

}