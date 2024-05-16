/*
Spiral Matrix

Problem statement
You are given a 2D matrix ‘MATRIX’ of ‘N’*’M’ dimension. You have to return the spiral traversal of the matrix.

Example:

Input:
MATRIX = [ [1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60] ]
Output:
1 3 5 7 20 60 34 30 23 10 11 16

Explanation: Starting from the element in the first row and the first column, traverse from left to right (1 3 5 7), then top to bottom (20 60), then right to left (34 30 23), then bottom to up (10) and then left to right (11 16).

Constraints:
1 <= N, M <= 10^5
1 <= MATRIX [ i ] [ j ] <= 10^9
The sum of N*M over all test cases is less than 2*10^5.
Time Limit: 1 sec
Sample Input 1:
3 3
1 3 7
10 12 15
19 20 21
Sample Output 1:
1 3 7 15 21 20 19 10 12
Explanation Of Sample Input 1:
Input:
MATRIX = [ [1, 3, 7], [10, 12, 15], [19, 20, 21] ], 
Output:
1 3 7 15 21 20 19 10 12

Explanation: Starting from the element in the first row and the first column, traverse from left to right (1 3 7), then top to bottom (15 21), then right to the left (20 19), then bottom to up (10) and then left to right (12).
Sample Input 2:
4 4
1 5 9 13
14 15 16 17
19 20 21 50
59 60 71 80
Sample Output 2:
1 5 9 13 17 50 80 71 60 59 19 14 15 16 21 20
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>&mat) {
    int n = mat.size();
    int m = mat[0].size();

    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;

    vector<int> ans;

    // Traversing through the whole matrix
    while(top <= bottom && left <= right) {
        // move right
        for(int i=left;i<=right;i++) {
            ans.push_back(mat[top][i]);
        }
        top++;

        // move bottom
        for(int i=top;i<=bottom;i++) {
            ans.push_back(mat[i][right]);
        }
        right--;

        // move left
        if(top <= bottom) {
            for(int i=right;i>=left;i--) {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // move top
        if(left <= right) {
            for(int i=bottom;i>=top;i--) {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int> (m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> matrix[i][j];
        }
    }
    vector<int> ans = spiralMatrix(matrix);
    for(auto it : ans) {
        cout << it << " ";
    }cout << endl;
    return 0;
}