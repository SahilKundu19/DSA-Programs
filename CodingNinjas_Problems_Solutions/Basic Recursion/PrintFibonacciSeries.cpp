/*
Problem statement
Given an integer ‘n’, return first n Fibonacci numbers using a generator function.



Example:
Input: ‘n’ = 5

Output: 0 1 1 2 3

Explanation: First 5 Fibonacci numbers are: 0, 1, 1, 2, and 3.

Sample Input 1:
5
Sample Output 1:
0 1 1 2 3
Explanation Of Sample Input 1:
The first 5 Fibonacci numbers are 0, 1, 1, 2, and 3.
Sample Input 2:
3
Sample Output 2:
0 1 1
Explanation Of Sample Input 2:
The first 5 Fibonacci numbers are 0, 1, 1.
*/



#include<iostream>
#include<vector>
using namespace std;

vector<int> generateFibonacci(int n) {
    if(n==0) {
        return {};
    }
    if(n==1) {
        return {0};
    }
    if(n==2) {
        return {0,1};
    }

    vector<int> v = generateFibonacci(n-1);

    v.push_back(v[v.size()-1] + v[v.size()-2]);
    return v;
}

int main() {
    int n;
    cin >> n;

    vector<int> v = generateFibonacci(n);
    for(auto it : v) {
        cout << it << " ";
    }
}