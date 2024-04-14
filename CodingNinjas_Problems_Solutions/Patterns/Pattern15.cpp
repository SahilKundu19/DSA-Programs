#include<iostream>
using namespace std;

/*
Pattern:
    A B C D E
    A B C D
    A B C 
    A B
    A 
*/

// void print1(int n) {
    
//     for(int i=1;i<=n;i++) {
//         char ch = 'A';
//         for(int j=1;j<=n-i+1;j++) {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// }


void print1(int n) {
    for(int i=0;i<n;i++) {
        for(char ch='A';ch < n-i+'A';ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        int n;
        cin >> n;
        print1(n);
    }
}