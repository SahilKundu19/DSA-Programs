/*
Merge 2 Sorted Array

Problem statement
Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.
The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.
Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.


Example:
Input: ‘n’ = 5 ‘m’ = 3
‘a’ = [1, 2, 3, 4, 6]
‘b’ = [2, 3, 5]
Output: [1, 2, 3, 4, 5, 6]
Explanation: Common elements in ‘a’ and ‘b’ are: [2, 3]
Distinct elements in ‘a’ are: [1, 4, 6]
Distinct elements in ‘b’ are: [5]
Union of ‘a’ and ‘b’ is: [1, 2, 3, 4, 5, 6]


Sample Input 1 :
5 3
1 2 3 4 6
2 3 5
Sample Output 1 :
1 2 3 4 5 6
Explanation Of Sample Input 1 :
Input: ‘n’ = 5 ‘m’ = 3
‘a’ = [1, 2, 3, 4, 6]
‘b’ = [2, 3, 5]
Output: [1, 2, 3, 4, 5, 6]
Explanation: Common elements in ‘a’ and ‘b’ are: [2, 3]
Distinct elements in ‘a’ are: [1, 4, 6]
Distinct elements in ‘b’ are: [5]
Union of ‘a’ and ‘b’ is: [1, 2, 3, 4, 5, 6]


Sample Input 2:
4 3
1 2 3 3
2 2 4
Sample Output 2:
1 2 3 4
Explanation Of Sample Input 2 :
Input: ‘n’ = 5 ‘m’ = 3
‘a’ = [1, 2, 3, 3]
‘b’ = [2, 2, 4]
Output: [1, 2, 3, 4]
Explanation: Common elements in ‘a’ and ‘b’ are: [2]
Distinct elements in ‘a’ are: [1, 3]
Distinct elements in ‘b’ are: [4]
Union of ‘a’ and ‘b’ is: [1, 2, 3, 4]


Expected Time Complexity:
O(( N + M )), where 'N' and ‘M’ are the sizes of Array ‘A’ and ‘B’.


Constraints :
1 <= 'n', 'm' <= 10^5
-10^9 <= 'a'[i], 'b'[i] <= 10^9

Time Limit: 1 sec
*/

#include<iostream>
#include<vector>
using namespace std;

// T.C -> O(n+m);  S.C -> O(n+m)
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    vector<int> Union;
    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            if(Union.size() == 0 || Union.back() != a[i]) {
                Union.push_back(a[i]);
            }
            i++;
        }
        else {
             if(Union.size() == 0 || Union.back() != b[j]) {
                Union.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n) {
         if(Union.size() == 0 || Union.back() != a[i]) {
                Union.push_back(a[i]);
            }
            i++;
    }
    while(j<m) {
        if(Union.size() == 0 || Union.back() != b[j]) {
                Union.push_back(b[j]);
            }
            j++;
    }
    return Union;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr1(n);
    for(int i=0;i<n;i++) {
        cin >> arr1[i];
    }
    vector<int> arr2(m);
    for(int i=0;i<m;i++) {
        cin >> arr2[i];
    }

    vector<int> Union = sortedArray(arr1,arr2);
    for(auto it : Union) {
        cout << it << " ";
    }cout << endl;
}