/*
Next Greater Permutation

Problem statement
You are given an array ‘a’ of ‘n’ integers.

You have to return the lexicographically next to greater permutation.

Note:
If such a sequence is impossible, it must be rearranged in the lowest possible order.


Example:
Input: 'a' = [1, 3, 2]
Output: 2 1 3
Explanation: All the permutations of [1, 2, 3] are [[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1], ]. Hence the next greater permutation of [1, 3, 2] is [2, 1, 3].



Sample Input 1:
3
3 1 2
Sample Output 1:
3 2 1
Explanation Of Sample Input 1:
Input:
A = [3, 1, 2]
Output:
3 2 1
Explanation: All the permutations of [1, 2, 3] are [[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1], ]. Hence the next greater permutation of [3, 1, 2] is [3, 2, 1].


Sample Input 2:
3
3 2 1
Sample Output 2:
1 2 3


Constraints:
1 <= n <= 100
1 <= a[ i ] <= 100

Time Limit: 1 sec
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A) {
    int index = -1;
    int n = A.size();
    for(int i=n-2;i>=0;i--) {
        if(A[i] < A[i+1]) {
            index = i;
            break;
        }
    }
    if(index == -1) {
        reverse(A.begin(), A.end());
        return A;
    }
    for(int i=n-1;i>index;i--) {
        if(A[i] > A[index]) {
            swap(A[i], A[index]);
            break;
        }
    }
    reverse(A.begin()+index+1, A.end());
    return A;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    arr = nextGreaterPermutation(arr);
    for(auto it : arr) {
        cout << it << " ";
    }cout << endl;
    return 0;
}