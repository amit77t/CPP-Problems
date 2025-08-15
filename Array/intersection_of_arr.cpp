#include<iostream>

using namespace std;


void intersection(int arr1[], int a, int arr2[], int b)
{
    

  
for(int i=0; i<a ; i++)
{  
    bool flag=false;

    for(int j=0; j<b ; j++)
    {
      if(arr1[i]==arr2[j])
        {
           flag =true;
           break;
        }
    }
    if(flag==true)
    {
        cout<< arr1[i]<<" ";

    }
       
}
}
int main()
{
    int arr1[]={10,15,20,16,30,50};
    int arr2[]={30, 5, 15, 80};

    intersection(arr1, 6 , arr2 ,4);


    

    
}