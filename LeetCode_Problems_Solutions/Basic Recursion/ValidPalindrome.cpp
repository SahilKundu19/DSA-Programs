/*
 125. Valid Palindrome
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    bool isPalindrome(string s) {
        string str1 = "", str2 = "";
        transform(s.begin(), s.end(), s.begin(), :: tolower); 
        int n = s.length();

        for(int i=0;i<n;i++) {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                str1 += s[i];
            }
        }

        str2 = str1;
        reverse(str1.begin(), str1.end());

        if(str1 == str2) return true;
        else return false;
    }
};

int main() {
    string str;
    cin >> str;

    Solution obj;

    cout << obj.isPalindrome(str) << endl;
}
