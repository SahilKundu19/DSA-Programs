#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();

    if(n==0) return n;

    unordered_set<int> set;
    
    for(int i=0;i<n;i++) {
        set.insert(a[i]);
    }
    int longest = 1;
    for(auto it : set) {
        if(set.find(it-1) == set.end()) {
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

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << longestSuccessiveElements(arr) << endl;
    return 0;
}