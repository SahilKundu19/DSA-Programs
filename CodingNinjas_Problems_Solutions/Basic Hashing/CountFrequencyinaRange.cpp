/*
Count Frequency in a range
Problem statement
You are given an array 'arr' of length 'n' containing integers within the range '1' to 'x'.


Your task is to count the frequency of all elements from 1 to n.

Note:
You do not need to print anything. Return a frequency array as an array in the function such that index 0 represents the frequency of 1, index 1 represents the frequency of 2, and so on.
Example:
Input: ‘n’ = 6 ‘x’ = 9 ‘arr’ = [1, 3, 1, 9, 2, 7]    
Output: [2, 1, 1, 0, 0, 0]
Explanation: Below Table shows the number and their counts, respectively, in the array
Number         Count 
 1                2
 2                1
 3                1
 4                0
 5                0
 6                0

 Sample Input 1:
6 4
1 3 4 3 4 1
Sample Output 1:
2 0 2 2 0 0
Explanation Of Sample Input 1 :
Frequency table:
Number         Count 
 1                2
 2                0
 3                2
 4                2
 5                0
 6                0
Sample Input 2 :
5 5
1 2 3 4 5
Sample Output 2 :
1 1 1 1 1
Explanation Of Sample Input 2 :
Frequency table:
Number         Count 
 1                1
 2                1
 3                1
 4                1
 5                1
Constraints:
1  <= n <= 10^5
1  <= x <= 10^5
1 <= arr[i] <= x

*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums) {
    unordered_map<int, int> mp;
    vector<int> vec;

    for(int i=0;i<n;i++) {
        mp[nums[i]]++;
    }

    for(int i=1;i<=n;i++) {
        vec.push_back(mp[i]);
    }
    return vec;
}

int main() {
    int n, a, x;
    cout << "Enter the no. of terms and range respectively: ";
    cin >> n >> x;

    vector<int> v;
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++) {
        cin >> a;
        v.push_back(a);
    }

    vector<int> vec;
    vec = countFrequency(n, x, v);

    cout << "Frequencies respectively to the elements: ";
    for(auto it : vec) {
        cout << it << endl;
    }
}