#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

vector<int> prefix(vector<int>& arr)
{  
    vector<int> preSum(arr.size());
    preSum[0] = arr[0];

    for(int i = 1; i < arr.size(); i++)
    {
        preSum[i] = preSum[i - 1] + arr[i];
    }
    return preSum;
}

int rangeSum(vector<int>& pre, int l, int r)
{
    if(l == 0)
        return pre[r];
    else
        return pre[r] - pre[l - 1];
}

int main()
{
    vector<int> arr = {2, 7, 3, 1, 5};

    
    vector<int> pre = prefix(arr);

   
    cout << "Prefix Sum Array: ";
    for(int x : pre) cout << x << " ";
    cout << endl;

    
    int q;
    cout << "\nEnter number of queries: ";
    cin >> q;

    while(q--)
    {
        int l, r;
        cout << "Enter range (l r): ";
        cin >> l >> r;
        
        cout << "Sum from index " << l << " to " << r << " = "
             << rangeSum(pre, l, r) << endl;
    }

    return 0;
}
