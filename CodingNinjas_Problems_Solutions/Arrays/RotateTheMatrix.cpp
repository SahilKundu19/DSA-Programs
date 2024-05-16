/*
Rotate The Matrix

Problem statement
You are given a square matrix ‘Mat’ of size ‘N’. You need to rotate ‘Mat’ by 90 degrees in the clockwise direction.

Note:

You must rotate the matrix in place, i.e., you must modify the given matrix itself. You must not allocate another square matrix for rotation.
For example

When,
‘N’ = 2 and ‘Mat’ = {{1, 2}, {3, 4}}, we must modify ‘Mat’ to {{3, 1}, {4, 2}}.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= N <= 100
1 <= Mat[i][j] <= 10^9

Time Limit: 1 sec
*/

#include<iostream>
#include<vector>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat) {
    int n = mat.size();
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for(int i=0;i<n;i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int> (n));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> matrix[i][j];
        }
    }
    rotateMatrix(matrix);
    for(auto it : matrix) {
        for(auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}