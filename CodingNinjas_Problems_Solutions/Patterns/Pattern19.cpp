#include<iostream>
using namespace std;

/*
Pattern:
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
*/

void print1(int n) {
    int space1 = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i;j++) {
            cout << "*";
        }
        for(int j=0;j<space1;j++){
            cout << " ";
        }
        for(int j=0;j<n-i;j++) {
            cout << "*" ; 
        }
        space1 += 2;
        cout << endl;
    }
    int space2 = 2*n-2;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout << "*" ;
        }
        for(int j=0;j<space2;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++) {
            cout << "*" ; 
        }
        space2 -= 2;
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