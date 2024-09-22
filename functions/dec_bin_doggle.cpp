#include <iostream>
#include <cmath>
using namespace std;


int decimalToBinary(int decimal) {
    int binary = 0;
    int place = 1; 
    
    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = binary + remainder * place;
        decimal /= 2;
        place *= 10;
    }
    
    return binary;
}

// int onesComplement(int binary) {
//     int complement = 0;
//     int place = 1; 
    
//     while (binary > 0) {
//         int bit = binary % 10;
//         if (bit == 0)
//             complement = complement + 1 * place;
//         else
//             complement = complement + 0 * place;
        
//         binary /= 10;
//         place *= 10;
//     }
    
//     return complement;
// }

int complement(int n)
{
    int m=n;
    int mask=0;
    if(n==0)
    {
        return 1;
    }
    while(n!=0)
    {
        mask=(mask<<1)/1;
        m=m>>1;

    }
    int ans=(~n) & mask;
    return ans;
}

int main()
{
     int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Step 1: Convert to binary
    int binary = decimalToBinary(decimal);
    cout << "Binary: " << binary << endl;

    // Step 2: Calculate 1's complement
    int onesComp =complement(binary);
    cout << "1's Complement: " << onesComp << endl;
}