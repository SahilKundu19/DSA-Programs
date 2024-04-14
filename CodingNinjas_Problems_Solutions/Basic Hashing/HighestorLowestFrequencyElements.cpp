/*
Highest / Lowest Frequency Elements
Problem statement
Given an array 'v' of 'n' numbers.

Your task is to find and return the highest and lowest frequency elements.
If there are multiple elements that have the highest frequency or lowest frequency, pick the smallest element.

Example:
Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]

Output: 1 2

Explanation: The element having the highest frequency is '1', and the frequency is 3. The elements with the lowest frequencies are '2', '3', and '4'. Since we need to pick the smallest element, we pick '2'. Hence we return [1, 2].

Sample Input 1 :
6
1 2 3 1 1 4
Sample Output 1 :
1 2
Sample Explanation 1:
Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]

Output: 1 2

Explanation: The element having the highest frequency is '1', and the frequency is 3. The elements with the lowest frequencies are '2', '3', and '4'. Since we need to pick the smallest element, we pick '2'. Hence we return [1, 2].
Sample Input 2 :
6
10 10 10 3 3 3
Sample Output 2 :
3 3
Sample Explanation 2:
Input: ‘n' = 6, 'v' = [10, 10, 10, 3, 3, 3]

Output: 3 3

Explanation: Since the frequency of '3' and '10' is 3. Therefore, the element with the maximum and minimum frequency is '3'.
Expected Time Complexity :
The expected time complexity is O(n), where n is the size of the array.
Expected Space Complexity :
The expected time complexity is O(n), where n is the size of the array.
Constraints :
2 <=  n <= 10^4
1 <= v[i] <= 10^9
There are at least two distinct elements in the array.
Time Limit: 1 sec 
*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    map<int, int> mp;
    for(int i=0;i<v.size();i++) {
        mp[v[i]]++;
    }
    // map[key,value]

    int max_value = 0, max_key;
    int min_value = INT_MAX, min_key;

    for(auto it : mp) {
        if(it.second > max_value) {
            max_value = it.second;
            max_key = it.first;
        }
        if(it.second < min_value) {
            min_value = it.second;
            min_key = it.first;
        }
    }
    return {max_key, min_key};
}

int main() {
    int n, a;
    cout << "Enter the no. of elements: ";
    cin >> n;

    vector<int> v;
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++) {
        cin >> a;
        v.push_back(a);
    }

    vector<int> vec;
    vec = getFrequencies(v);
    cout << "Frequencies of highest and lowest element respectively : ";
    for(auto it : vec) {
        cout << it << " ";
    }

}