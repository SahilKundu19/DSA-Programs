/*
128. Longest Consecutive Sequence

Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time.
 

Example 1:
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.


Example 2:
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
 

Constraints:
0 <= nums.length <= 105
-109 <= nums[i] <= 109
*/

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
    public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return nums.size();

        unordered_set<int> set;
        for(int i=0;i<nums.size();i++) {
            set.insert(nums[i]);
        }
        
        int longest = 1;
        for(auto it : set) {
            if(set.find(it-1) != set.end()) {
                int count = 1;
                int x = it;
                while(set.find(x+1) != set.end()) {
                    count += 1;
                    x += 1;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    Solution obj;
    cout << obj.longestConsecutive(arr) << endl;
    return 0;
}