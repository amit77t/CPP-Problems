#include<iostream>
using namespace std;



int   count(int mat[][3], int n, int m, int key)
{
    int count=0;

    for(int  i=0; i<n; i++){
        for(int j=0; j<m ; j++)
        {
            if(mat[i][j]==key)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int mat[3][3]={
        {4,7,8},
        {8,8,7},
        {7,8,9}
    };

    cout<<count(mat, 3,3,70);
    return 0;

}