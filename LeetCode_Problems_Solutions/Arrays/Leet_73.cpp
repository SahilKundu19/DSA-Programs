/*
73. Set Matrix Zeroes

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

Example 1:
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]


Example 2:
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

Constraints:
m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1

Follow up:
A straightforward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row[n];
        for(int i=0;i<n;i++) {
            row[i] = 0;
        }
        int col[m];
        for(int j=0;j<m;j++) {
            col[j] = 0;
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

    
int main() {
    int n,m;
    cout << "Enter the no. of rows and columns respectively : ";
    cin >> n >> m;

    vector<vector<int>> Matrix(n, vector<int> (m));
    cout << "Enter the Matrix: " << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> Matrix[i][j];
        }
    }

    Solution obj;
    vector<vector<int>> ans = obj.zeroMatrix(Matrix, n, m);
    cout << "OUTPUT : " << endl;
    for(auto it : ans) {
        for(auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
}