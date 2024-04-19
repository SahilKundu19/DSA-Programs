/*
Rotate Array

Problem statement
Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.

Example:
'arr '= [1,2,3,4,5]
'k' = 1  rotated array = [2,3,4,5,1]
'k' = 2  rotated array = [3,4,5,1,2]
'k' = 3  rotated array = [4,5,1,2,3] and so on.

Sample Input 1:
8
7 5 2 11 2 43 1 1
2
Sample Output 1:
2 11 2 43 1 1 7 5
Explanation of Sample Input 1:
Rotate 1 steps to the left: 5 2 11 2 43 1 1 7
Rotate 2 steps to the left: 2 11 2 43 1 1 7 5

Sample Input 2:
4
5 6 7 8
3
Sample Output 2:
8 5 6 7
Explanation of Sample Input 2:
Rotate 1 steps to the left: 6 7 8 5
Rotate 2 steps to the left: 7 8 5 6
Rotate 2 steps to the left: 8 5 6 7

Expected Time Complexity:
O(n), where ‘n’ is the size of the array ‘arr’ and ‘k’ is the number of rotations.

Constraints:
1 <= 'n' <= 10^3
1 <= 'arr'[i] <= 10^9
1 <= 'k' < 'n'
*/

#include<iostream>
#include<vector>
using namespace std;

// T.C -> O(N), S.C -> O(N)

vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    int d = k%n;
    vector<int> temp;

    // Store the elements to be shifted left in a temporary vector array
    for(int i=0;i<d;i++) {
        temp.push_back(arr[i]);
    } 

    // Shift the remaining elements ahead by d places
    for(int i=d;i<n;i++) {
        arr[i-d] = arr[i];
    }

    // Copy the elements stored in the temporary array to the main array
    for(int i=n-d;i<n;i++) {
        arr[i] = temp[i-(n-d)];
    }
    return arr;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    arr = rotateArray(arr,n);
    for(auto it : arr) {
        cout << it << " ";
    }cout << endl;
    return 0;
}