#include<iostream>
using namespace std;

int main()
{
    int std[3][3]={{100, 100, 100},{89, 45, 67},{34, 68,90}};

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<std[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;
}