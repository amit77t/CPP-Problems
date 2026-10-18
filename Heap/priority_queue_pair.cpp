#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void print(vector<int> arr)
{
    priority_queue<pair<int, int>> pq;

    for(int i=0; i<arr.size(); i++)
    {
        pq.push({arr[i], i});

    }

    while(!pq.empty())
    {
        cout<<pq.top().first<<" ,"<<pq.top().second<<endl;
        pq.pop();
    }
}



int main()
{
    vector<int> arr={5,4,3,2,1};

    print(arr);
    return 0;

}