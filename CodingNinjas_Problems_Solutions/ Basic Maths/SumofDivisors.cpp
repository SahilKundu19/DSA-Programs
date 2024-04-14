/*
Problem statement
You are given an integer ‘n’.



Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’.



Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.



Example:
Input: ‘n’  = 5

Output: 21

Explanation:
We need to find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to 5. 
‘sumOfDivisors(1)’ = 1
‘sumOfDivisors(2)’ = 2 + 1 = 3
‘sumOfDivisors(3)’ = 3 + 1 = 4
‘sumOfDivisors(4)’ = 4 + 2 +1 = 7 
‘sumOfDivisors(5)’ = 5 + 1 = 6
Therefore our answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) + sumOfDivisors(4) + sumOfDivisors(5) = 1 + 3 + 4 + 7 + 6 = 21.
*/


#include<iostream>
using namespace std;


// Brute Force Approach : O(n^2)
int sumofDivisors(int n) {
    int sum = 0;
    for(int i=0;i<=n;i++) {
        while(n>0){
            int a = n;
            for(int j=1;j<=a;j++) {
                if(a%j==0) {
                    sum += j;
                }
            }
            n--;
        }
    }
    return sum;
}

// Optimal Approach : O(n)
int sumOFDivisors(int n) {
    int sum = 0;
    for(int i=1;i<=n;i++) {
        sum += (n-(n%i));
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    cout << sumofDivisors(n);
    cout << endl;
    cout << sumOFDivisors(n);
}