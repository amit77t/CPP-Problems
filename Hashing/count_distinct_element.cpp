#include<iostream>
#include<map>
using namespace std;


void countDistinct(int arr[], int n, int k)
{
    map<int, int> m;

    for(int i=0; i<k; i++)
    {
        m[arr[i]]++;
    }
    cout<<m.size();
      for (int i = k; i < n; i++) { 
        
        m[arr[i - k]]--;
        
        if (m[arr[i - k]] == 0) { 
            m.erase(arr[i-k]); 
        }   
        m[arr[i]] += 1; 
   
        cout << m.size() << " "; 
    } 
}




int main()
{
  int arr[] = {10,20,10,10,30,40};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    countDistinct(arr, n, k);
    return 0;
}