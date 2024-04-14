#include<iostream>
using namespace std;

// Approach 1 : O(n)
int countDigits(int n) {
    int count = 0;
    while(n>0) {
        int digits = n%10;
        count++;
        n /= 10;
    }
    return count;
}

// Approach 2 : Use logarithm base 10:  O(1)
int count_digits(int n) {
    int digits = floor(log10(n) + 1);
    return digits;
}

// Approach 3 : using string function : O(1)
int count_Digits(int n) {
    string digits = to_string(n);
    return digits.length();
}

int main() {
    int n1, n2, n3;
    cout << "Enter the number : ";
    cin >> n1 >> n2 >> n3;

    cout << "Approach 1: Number of digits are: " << countDigits(n1) << endl;

    cout << "Approach 2: Number of digits are: " << count_digits(n2) << endl;
    
    cout << "Approach 2: Number of digits are: " << count_Digits(n3) << endl;

    return 0;
}