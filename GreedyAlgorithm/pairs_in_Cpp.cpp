#include<iostream>
#include<math.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main()
{

    vector<pair<int, int>> act(3, make_pair(0, 0));

    act[0] = make_pair(1, 2);
    act[1] = make_pair(3, 4);
    act[2] = make_pair(5, 6);
    for(int i=0; i<act.size(); i++)
    {
        
        cout << "Pair " << i << ": (" << act[i].first << ", " << act[i].second << ")" << endl;
    } 

    sort(act.begin(), act.end(), compare);


    for(int i = 0; i < act.size(); i++) {
        cout << "Sorted Pair " << i << ": (" << act[i].first << ", " << act[i].second << ")" << endl;
    }
    return 0;
}