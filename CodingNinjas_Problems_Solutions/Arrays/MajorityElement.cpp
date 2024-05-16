/*
Majority Element

Problem statement
You are given an array 'a' of 'n' integers.
A majority element in the array ‘a’ is an element that appears more than 'n' / 2 times.
Find the majority element of the array.

It is guaranteed that the array 'a' always has a majority element.


Example:
Input: ‘n’ = 9, ‘a’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]
Output: 1
Explanation: The frequency of ‘1’ is 5, which is greater than 9 / 2.
Hence ‘1’ is the majority element.


Sample Input 1:
9
2 2 1 3 1 1 3 1 1
Sample Output 1:
1
Explanation Of Sample Input 1:
Input: ‘n’ = 9, ‘a’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]
Output: 1
Explanation: The frequency of ‘1’ is 5, which is greater than 9 / 2.
Hence ‘1’ is the majority element.



Sample Input 2:
1
4
Sample Output 2:
4


Sample Input 3:
5
-53 75 56 56 56 
Sample Output 3:
56


Expected time complexity :
The expected time complexity is O(n).

Constraints :
1 <= 'n' <= 10000
0 <= 'arr[i]' <= 10^9

Time limit: 1 second
*/

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> v) {
    int count = 0;
    int ele;
    for(int i=0;i<v.size();i++) {
        if(count == 0) {
            ele = v[i];
            count = 1;
        }
        else if(v[i] == ele) {
            count++;
        }
        else {
            count--;
        }
    }
    int count1 = 0;
    for(int i=0;i<v.size();i++ ) {
        if(v[i]==ele) count1++;
    }
    if(count1 > (v.size())/2) {
        return ele;
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
    cout << majorityElement(arr) <<endl;
    return 0;
}