#include<iostream>
using namespace std;

void print(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==1 || j==1 || i==n || j==n) {
                cout << "*";
            }
            else {
                cout << " ";
            }
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
        print(n);
    }
}