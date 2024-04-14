#include<iostream>
using namespace std;

/*
Pattern:
         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA

*/

void print(int n)  {

    // for outer loop
    for(int i=0;i<n;i++) {

        // for printing space
        for(int j=0;j<n-i-1;j++) {
            cout << " ";
        }

        char ch = 'A';
        int br = (2*i+1)/2;
        for(int j=1;j<=2*i +1;j++) {
            cout << ch<<" " ;
            if(j<=br) {
                ch++;
            }
            else {
                ch--;
            }
        }

        // for printing space
        for(int j=0;j<n-i-1;j++) {
            cout << " ";
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