#include<iostream>
using namespace std;

/*
Pattern: 
    1
    01
    101
    0101
    10101
*/

void print(int n) {
    // int start =1;
    // for(int i=0;i<n;i++) {
    //     if(i%2==0) {
    //         start = 1;
    //     }
    //     else {
    //         start =0;
    //     }
    //     for (int j = 0; j <=i; j++)
    //     {
    //         cout << start;
    //         start = 1-start;
    //     }
    //     cout << endl;
    // }
    int start =1;
    for(int i=1;i<=n;i++) {
        if(i%2==0) {
            start = 0;
        }
        else {
            start =1;
        }
        for (int j = 1; j <=i; j++)
        {
            cout << start;
            start = 1-start;
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