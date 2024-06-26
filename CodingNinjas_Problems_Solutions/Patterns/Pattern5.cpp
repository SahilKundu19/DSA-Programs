#include<iostream>
using namespace std;

/*
Pattern:
    *****
    ****
    ***
    **
    *
*/

void print1(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i;j++) {
            cout << "*";
        }
        cout << endl;
    }
}

/* or
void print1(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=0;j<n-i+1;j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

or
void print1(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=n;j>=i;j--) {
            cout << "* ";
        }
        cout << endl;
    }
}
*/

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        int n;
        cin >> n;
        print1(n);
    }
}