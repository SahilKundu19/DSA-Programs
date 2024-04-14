/*
Problem statement
You are given an integer ‘n’.

Print “Coding Ninjas ” ‘n’ times, without using a loop.

Example:
Input: ‘n’  = 4

Output:
Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas 

Explanation: “Coding Ninjas” is printed 4 times. 

Sample Input 1:
3
Sample Output 1:
Coding Ninjas Coding Ninjas Coding Ninjas 

Explanation of sample output 1:
“Coding Ninjas” is printed 3 times. 


Sample Input 2:
5
Sample Output 2:
Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas 


Expected Time Complexity:
Try to solve this in O(n).


Expected Space Complexity:
Try to solve this in O(n).


Constraints:
1 <= 'n' <= 10^4

Time Limit: 1 sec
*/

#include<iostream>
#include<vector>
using namespace std;

vector<string> printNTimes(int x) {
    if(x==0) {return {}; }
    cout << "Coding Ninjas" << " ";
    return printNTimes(x-1);
}

int main() {
    int n;
    cin >> n;
    printNTimes(n);
    return 0;
}