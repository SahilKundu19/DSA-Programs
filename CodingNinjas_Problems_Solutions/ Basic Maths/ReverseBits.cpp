/*
Problem statement
There is a song concert going to happen in   the city. The price of each ticket is equal to the number obtained after reversing the bits of a given 32 bits unsigned integer ‘n’.


Sample Input 1 :
2
0
12
Sample Output 1:
 0
 805306368


Explanation For Sample Input 1 :

For the first test case :

Since the given number N = 0 is represented as 00000000000000000000000000000000 in its binary representation. So after reversing the bits, it will become 00000000000000000000000000000000 which is equal to 0 only. So the output is 0.     


For the second test case :

Since the given number N = 12 is represented as 00000000000000000000000000001100 in its binary representation. So after reversing the bits, it will become 0110000000000000000000000000000, which is equal to 805306368 only. So the output is 805306368.
*/

#include<iostream>
using namespace std;

long reverseBits(long n) {
    long rev = 0;
    for(int i=0;i<32;i++) {
        rev = rev*2 + n%2;
        n /= 2;
    }
    return rev;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long n;
        cin >> n;
        
        cout << reverseBits(n);
    }
    
}
