/*
Missing Number

Problem statement
Given an array ‘a’ of size ‘n’-1 with elements of range 1 to ‘n’. The array does not contain any duplicates. Your task is to find the missing number.

For example:
Input:
'a' = [1, 2, 4, 5], 'n' = 5
Output :
3
Explanation: 3 is the missing value in the range 1 to 5.

Sample Input 1 :
4 
1 2 3
Sample Output 1:
4
Explanation Of Sample Input 1:
4 is the missing value in the range 1 to 4.


Sample Input 2:
8
1 2 3 5 6 7 8
Sample Output 2:
4
Explanation Of Sample Input 2:
4 is the missing value in the range 1 to 8.

Expected time complexity:
The expected time complexity is O(n).

Constraints:
1 <= 'n' <= 10^6 
1 <= 'a'[i] <= 'n'

Time Limit: 1 sec
*/

#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& a, int N) {
    int xor1 = 0;
    int xor2 = 0;

    for(int i=0;i<n-1;i++) {
        xor2 = xor2^a[i];
        xor1 = xor1^(i+1);
    }
    xor1 = xor1^N;
    return (xor1^xor2);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int ans = missingNumber(arr,n);
    cout << ans << endl;
    return 0;
}