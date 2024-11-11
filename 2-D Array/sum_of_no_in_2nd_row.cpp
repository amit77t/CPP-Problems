#include<iostream>
using namespace std;



void  sum(int mat[][3], int n, int m)
{
    int sum=0;

    for(int j=0; j<m; j++)
    {
        sum+=mat[1][j];
    }

    cout<<"sum is = "<< sum<<endl;


}

int main()
{
    int mat[3][3]={
        {4,7,8},
        {8,8,7},
        {7,8,9}
    };
    sum(mat, 3 ,3);
    
    return 0;

}