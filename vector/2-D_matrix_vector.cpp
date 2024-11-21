// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int rows , cols;
  
   cout<<"enter the rows"<<endl;
   cin>>rows;
   cout<<"enter the cols"<<endl;
   cin>>cols;
    vector<vector <int> > matrix(rows, vector<int> (cols));
   int x=1;
   for(int i=0; i<rows; i++)
   {
       for(int j=0; j<cols; j++)
       {
           matrix[i][j]=x++;
       }
   }
   for(int i=0; i<rows; i++)
   {
       for(int j=0; j<cols; j++)
       {
           cout<<matrix[i][j]<<" ";
       }
       cout<<endl;
   }
    
  return 0;
     
   

    return 0;
}