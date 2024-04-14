#include<iostream>
using namespace std;

/*
Pattern:
    A
    BB
    CCC
    DDDD
    EEEEE
*/

// void print1(int n) {
//     char ch = 'A';
//     for(int i=1;i<=n;i++) {
//         for(int j=1;j<=i;j++) {
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
//     }
// }


void print1(int n) {
    for(int i=0;i<n;i++) {
        char ch = 'A' + i;
        for(int j=0;j<=i;j++) {
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