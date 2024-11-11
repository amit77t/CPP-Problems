#include<iostream>
using namespace std;



void  transposeMat(int mat[][3], int n, int m)
{
    int count=0;

    for(int  i=0; i<n; i++){
        for(int j=0; j<m ; j++)
        {
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int mat[3][3]={
        {4,7,8},
        {8,8,7},
        {7,8,9}
    };

    transposeMat(mat, 3,3);
    return 0;

}