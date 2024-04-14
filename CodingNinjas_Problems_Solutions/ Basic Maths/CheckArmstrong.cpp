/*
Problem statement
You are given an integer 'n'.



Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.



Note:
An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.


Example:
Input: 'n' = 1634

Output: true

Explanation:
1634 is an Armstrong number, as 1^4 + 6^4 + 3^4 + 4^4 = 1634
*/


#include<iostream>
using namespace std;

bool isArmstrong(int n) {
    int temp = n;
    int count = 0, sum = 0, p;
    while(temp > 0) {
        count ++;
        temp /= 10;
    }
    temp = n;
    while(temp > 0) {
        int digit = temp % 10;
        p = 1;
        for(int i=1; i<=count; i++) {
            p *= digit;
        }
        sum += p;
        temp /= 10;
    }
    if(sum == n)  {
        return true; 
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    cout << isArmstrong(n);
}