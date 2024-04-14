/*
Problem statement
You are given an integer ’n’.



Your task is to return a sorted array (in increasing order) containing all the factorial numbers which are less than or equal to ‘n’.



The factorial number is a factorial of a positive integer, like 24 is a factorial number, as it is a factorial of 4.



Note:
In the output, you will see the array returned by you.
Example:
Input: ‘n’ = 7

Output: 1 2 6

Explanation: Factorial numbers less than or equal to ‘7’ are ‘1’, ‘2’, and ‘6’.

Sample Input 1:
7
Sample Output 1 :
1 2 6
Explanation Of Sample Input 1:
Input: ‘n’ = 7

Output: 1 2 6

Explanation: Factorial numbers less than or equal to ‘7’ are ‘1’, ‘2’, and ‘6’.
Sample Input 2:
2
Sample Output 2:
1 2
Explanation Of Sample Input 2:
Input: ‘n’ = 2

Output: 1 2

Explanation: Factorial numbers less than or equal to ‘2’ are ‘1’ and ‘2’.
*/

#include<iostream>
#include<vector>
using namespace std;

long long fact(long long x) {
    if(x<=1) {
        return 1;
    }
    return x*fact(x-1);
}

void sort(long long x, long long n, vector<long long>& v) {
    if(fact(x) > n) {
        return;
    }
    v.push_back(fact(x));
    sort(x+1,n,v);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> v;
    sort(1,n,v);
    return v;
}

int main() {
    long long n;
    cin >> n;

    vector<long long> v;
    v = factorialNumbers(n);
    for(auto i : v) {
        cout << i << " ";
    }
}