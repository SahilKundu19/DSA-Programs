/*
Longest Subarray With Sum K

Problem statement
You are given an array 'a' of size 'n' and an integer 'k'.
Find the length of the longest subarray of 'a' whose sum is equal to 'k'.


Example :
Input: ‘n’ = 7 ‘k’ = 3
‘a’ = [1, 2, 3, 1, 1, 1, 1]
Output: 3
Explanation: Subarrays whose sum = ‘3’ are:
[1, 2], [3], [1, 1, 1] and [1, 1, 1]
Here, the length of the longest subarray is 3, which is our final answer.


Sample Input 1 :
7 3
1 2 3 1 1 1 1
Sample Output 1 :
3
Explanation Of Sample Input 1 :
Subarrays whose sum = ‘3’ are:
[1, 2], [3], [1, 1, 1] and [1, 1, 1]
Here, the length of the longest subarray is 3, which is our final answer.


Sample Input 2 :
4 2
1 2 1 3

Sample Output 2 :
1


Sample Input 3 :
5 2
2 2 4 1 2 
Sample Output 3 :
1


Expected time complexity :
The expected time complexity is O(n).


Constraints :
1 <= 'n' <= 5 * 10 ^ 6
1 <= 'k' <= 10^18
0 <= 'a[i]' <= 10 ^ 9

Time Limit: 1-second
*/

#include<iostream>
#include<vector>
using namespace std;

int longestSubarrayWithSumK(vector<int> arr, long long k) {
    int i = 0;
    int j = 0;
    long long sum = arr[0];
    int len = 0;

    while(j<arr.size()) {
        while(i<=j && sum > k) {
            sum -= arr[i];
            i++;
        }
        if(sum == k) {
            len = max(len,j-i+1);
        }
        j++;
        if(j<arr.size()) {
            sum += arr[j];
        }
    }
    return len;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    long long k;
    cin >> k;
    cout << longestSubarrayWithSumK(arr,k) << endl;
    return 0;
}