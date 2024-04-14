#include<iostream>
using namespace std;

/*
Pattern:
    12345
    1234
    123
    12
    1
*/

void print1(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i+1;j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

/* or
void print1(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=0;j<n-i+1;j++) {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

or
void print1(int n) {
    for(int i=1;i<=n;i++) {
        int count=1;
        for(int j=n;j>=i;j--) {
            cout << count << " ";
            count++;
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