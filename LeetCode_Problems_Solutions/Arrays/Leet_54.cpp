/*
54. Spiral Matrix

Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:
    1 2 3
    4 5 6  -> 1 2 3 6 9 8 7 4 5 
    7 8 9
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Example 2:
1  2  3  4 
5  6  7  8  -> 1 2 3 4 8 12 11 10 9 5 6 7 
9 10 11 12

Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]

Constraints:
m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100
*/


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = m-1;
        vector<int> ans;
        while(ans.size() < n*m) {
            for(int i=left;i<=right;++i) 
                ans.push_back(matrix[top][i]);
            ++top;

            for(int i=top;i<=bottom;++i) 
                ans.push_back(matrix[i][right]);
            --right;

            if(top <= bottom) {
                for(int i=right;i>=left;--i) 
                    ans.push_back(matrix[bottom][i]);
                --bottom;
            }

            if(left <= right) {
                for(int i=bottom;i>=top;--i) 
                    ans.push_back(matrix[i][left]);
                ++left;
            }
        }
        return ans;
    }
};

int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int> (m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> matrix[i][j];
        }
    }
    Solution obj;
    vector<int> ans = obj.spiralOrder(matrix);
    for(auto it : ans) {
        cout << it << " ";
    }cout << endl;
    return 0;
}