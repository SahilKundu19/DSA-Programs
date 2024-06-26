/*
Problem statement
Determine if a given string ‘S’ is a palindrome using recursion. Return a Boolean value of true if it is a palindrome and false if it is not.

Note: You are not required to print anything, just implement the function. Example:
Input: s = "racecar"
Output: true
Explanation: "racecar" is a palindrome.

Sample Input 1:
abbba
Sample Output 1:
true
Explanation Of Sample Input 1 :
“abbba” is a palindrome
Sample Input 2:
abcd
Sample Output 2:
false
Explanation Of Sample Input 2 :
“abcd” is not a palindrome.

*/

#include<iostream>
#include<string>
using namespace std;

bool Reverse(int i, string& str) {
    if(i >= str.size()/2) {
        return true;
    }
    if(str[i] != str[str.size()-i-1]) {
        return false;
    }
    return stringReverse(i+1, str);
}

bool isPalindrome(string& str) {
    return Reverse(0,str);
}

int main() {
    string str;
    cin >> str;

    cout << isPalindrome(str);
}