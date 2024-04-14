/*
Problem statement
Check whether a given number ’n’ is a palindrome number.

Note :
Palindrome numbers are the numbers that don't change when reversed.
You don’t need to print anything. Just implement the given function.
Example:
Input: 'n' = 51415
Output: true
Explanation: On reversing, 51415 gives 51415.

Sample Input 1 :
1032
Sample Output 1 :
false
Explanation Of Sample Input 1:
1032, on being reversed, gives 2301, which is a totally different number.
Sample Input 2 :
121
Sample Output 2 :
true
Explanation Of Sample Input 2:
121, on being reversed, gives 121, which is the same.
*/

#include<iostream>
using namespace std;

bool palindrome(int n) {
    int temp = n;
    int rev = 0;
    while(temp!=0) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    if(rev == n) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << palindrome(n) << endl;
}