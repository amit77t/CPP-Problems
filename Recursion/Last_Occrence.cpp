#include<iostream>
#include<vector>
using namespace std;

int lastOcc(vector<int> arr, int i, int target)
{
  if(i==arr.size())
  {
    return -1;
  }
  int idxFound=lastOcc(arr, i, target);

  if( idxFound==-1 && arr[i]==target)
  {
    return i;
  }

  return idxFound;
}

int main()
{
    vector<int> arr={1,2,3,3,3,4};
    cout<<lastOcc(arr,0,3)<<endl;
    return 0;

}