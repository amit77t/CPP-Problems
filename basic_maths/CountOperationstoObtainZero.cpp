#include<iostream>
using namespace std;
int countOperations(int num1, int num2) {

        if(num1==0 || num2==0)
        {
            return 0;
        }

       int count=0;
        while(num1!=0 && num2!=0)
        {   
            if(num1>=num2)
            {
                num1=num1-num2;
                count++;
               
            }
            else{
                num2=num2-num1;
                count++;
                   
            }
            
        }

        return count;

        
    }



int main()
{

    cout<<countOperations(2, 3)<<endl;
return 0;
}