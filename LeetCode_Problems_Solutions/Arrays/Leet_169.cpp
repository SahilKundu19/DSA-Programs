/*
169. Majority Element

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 
Example 1:
Input: nums = [3,2,3]
Output: 3


Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele;
        for(int i=0;i<nums.size();i++) {
            if(count == 0) {
                ele = nums[i];
                count = 1;
            }
            else if(nums[i] == ele) {
                count++;
            }
            else 
            {
                count--;
            }
        }
        int count1 = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == ele) count1++;
        }
        if(count < (nums.size())/2) return ele;
        
        return -1;
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
    cout << obj.majorityElement(arr) << endl;
    return 0;
}