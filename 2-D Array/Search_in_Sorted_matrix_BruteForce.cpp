#include<iostream>
using namespace std; 
bool search(int mat[][4], int n , int m, int key)
{
   for(int i=0; i<n; i++)
   {
    for(int j=0; j<m ; j++)
    {
        if(mat[i][j]==key)
        {
            cout<<"Found at cell (" << i <<","<<j<<")\n";
        return true;
        }
    }
   }
   cout<<"Key Not Found\n";
   return false;
}



int main()
{
  int mat[4][4]={{10,20,30,40},
                 {15,25,35,45},
                 {27,29,37,48},
                 {32,33,39,50}};
  search(mat, 4, 4, 33);
  return 0;
  
}