/*
Problem statement
Calculate and return GCD(Greatest Common Divisor) of two given numbers x and y.

Note :
Numbers should be in range of Integer.
Sample Input 1:
20 
5
Sample Output 1:
5
Sample Input 2:
96 
14
Sample Output 2:
2
*/

#include<iostream>
using namespace std;


// Brute Force Approach : O(min(a,b))
void printgcd(int a, int b) {
    int n = 1;
    for(int i=1; i<=min(a,b); i++) {
        if(a%i==0 && b%i==0) {
            n=i;
        }
    }
    cout << n << endl;

    // (OR)
    // for(int i=min(a,b); i>=1; i--) {
    //     if(a%i==0 && b%i==0) {
    //         print(i);
    //         break;
    //     }
    // }
}

// Optimal Approach 1 : Euclidean Algorithm:  O(log phi(min(a,b)))
void printGCD(int a, int b) {
    while(a>0 && b>0) {
        if(a>b) {
            a = a%10;
        }
        else {
            b = b%10;
        }
    }
    if(a==0) {
        cout << b <<endl;
    }
    else {
        cout << a <<endl;
    }
}

// Optimal Approach 2 : Euclidean Algorithm
int gcd(int a, int b) {
    if(b==0) {
        return a;
    }
    return gcd(b,a%b);
}

int main() {
    int a, b;
    cin >> a >> b;

    printgcd(a,b);
    printGCD(a,b);
    cout << gcd(a,b) <<endl;
}