#include<iostream>
using namespace std;

/*
Pattern:
    A      
    A B    
    A B C  
    A B C D
    A B C D E
*/

// void print1(int n) {
    
//     for(int i=1;i<=n;i++) {
//         char ch = 'A';
//         for(int j=1;j<=i;j++) {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// }


void print(int n) {
    for(int i=0;i<n;i++) {
        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch;
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