#include<iostream>
using namespace std;
void printSnake(int arr[][3])
{
    for(int i=0; i<3; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<3; j++)
            {
              cout<<arr[i][j]<<" ";
            }
        }
       else{
              for(int j=2; j>=0; j--)
       {
        cout<<arr[i][j]<<" ";
       }
       }
       cout<<endl;
     


    }
}



int main()

{
    int arr[3][3] ={{45, 48, 54}, 
              {21, 89, 87}, 
              {70, 78, 15}};

     printSnake(arr);
    return 0;
}