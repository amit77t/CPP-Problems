#include<iostream>
using namespace std; 
bool search(int mat[][4], int n , int m, int key)
{
   int i=0 , j=m-1;
   while( i<n  && j>=0)
   {
    if(mat[i][j]==key)
    {
        cout<<"Found at cell (" << i <<","<<j<<")\n";
        return true;
    }else if(mat[i][j]>key)
    {
        //left
        j--;
    }
    else{
        //down
        i++;
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
  search(mat, 4, 4, 505);
  return 0;
  
}