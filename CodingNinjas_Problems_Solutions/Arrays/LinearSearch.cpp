/*
Linear Search

Problem statement
You are given an array ‘arr’ containing ‘n’ integers. You are also given an integer ‘num’, and your task is to find whether ‘num’ is present in the array or not.

If ‘num’ is present in the array, return the 0-based index of the first occurrence of ‘num’. Else, return -1.


Example:
Input: ‘n’ = 5, ‘num’ = 4 
'arr' =  [6,7,8,4,1] 
Output: 3
Explanation:
4 is present at the 3rd index.

Sample Input 1:
5 4
6 7 8 4 1
Sample Output 1 :
3
Explanation Of Sample Input 1:
4 is present at the 3rd index.


Sample Input 2:
4 2
2 5 6 2
Sample Output 2 :
0
Explanation Of Sample Input 1:
2 is present at the 0th and 3rd index. But since, we need to find the first occurance we return the 0th index

Expected time complexity:
The expected time complexity is O(n).

Constraints:
1  <= 'n' <= 10^6
1 <= 'arr'[i] <= 1000
Time Limit: 1 sec
*/

#include<iostream>
#include<vector>
using namespace std;

// T.C -> O(N), S.C -> O(1)
int linearSearch(int n, int num, vector<int> &arr) {
    for(int i=0;i<n;i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    cout << linearSearch(n,num,arr) << endl;
    return 0;
}