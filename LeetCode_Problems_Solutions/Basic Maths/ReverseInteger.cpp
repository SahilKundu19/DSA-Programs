
// Problem Statement: Reverse Integer

/*  Given a signed 32-bit integer x, return x with its digits reversed. If x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 -1], then return 0.


Example 1:
    Input: x = 123
    Output: 321

Example 2:
    Input: x = -123
    Output: -321

Example 3:
    Input: x = 120
    Output: 21

*/

#include<iostream>
#include<limits.h>
using namespace std;

class Solution {
    public:
    int reverse(int x) {
        int rev = 0;
        while(x!=0) {
            int digit = x%10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10) {
                return 0;
            }
            rev = rev*10 + digit;
            x /= 10;
        }
        return rev;
    }
};

int main() {
    int n;
    cin >> n;
    Solution obj;
    cout << obj.reverse(n) << endl;
}


