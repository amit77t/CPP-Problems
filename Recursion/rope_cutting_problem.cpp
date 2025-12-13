#include <iostream>
#include <algorithm>
using namespace std;

int ropeCutting(int n, int a, int b, int c)
{
    // base cases
    if(n == 0) return 0;   // no rope left → 0 pieces
    if(n < 0) return -1;  // invalid cut

    // recursive calls (CALL → WAIT)
    int x = ropeCutting(n - a, a, b, c);
    int y = ropeCutting(n - b, a, b, c);
    int z = ropeCutting(n - c, a, b, c);

    // find best among three
    int res = max(x, max(y, z));

    
    if(res == -1) return -1;  // no valid way
    return res + 1;           // +1 = current cut ka piece
}

int main()
{
    int n = 23;
    int a = 12, b = 9, c = 11;

    cout << ropeCutting(n, a, b, c);
    return 0;
}
