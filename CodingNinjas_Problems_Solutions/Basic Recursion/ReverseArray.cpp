#include<iostream>
#include<vector>
using namespace std;

// Swapping Array using Parameterised Approach
/*
vector<int> Reverse(vector<int>& v, int i, int j) {
    if(i >= j) {
        return v;
    }
    swap(v[i],v[j]);
    return Reverse(v,i+1,j-1);
}

int main() {
    int n;
    cin >> n;
    int a;
    vector<int> v;
    for(int i=0;i<n;i++) {
        cin >> a;
        v.push_back(a);
    }
    Reverse(v,0,n-1);

    for(auto it : v) {
        cout << it << " ";
    }
}
*/


// Using Functional Approach
void Swap(int i, int n, vector<int> &nums) {
    if(i>=n/2) {
        return;
    }
    swap(nums[i], nums[n-i-1]);
    Swap(i+1,n,nums);
}

vector<int> reverseArray(int n, vector<int> &nums) {
    Swap(0,n,nums);
    return nums;
}

int main() {
    int n;
    cin >> n;
    int a;
    vector<int> v;
    for(int i=0;i<n;i++) {
        cin >> a;
        v.push_back(a);
    }
    reverseArray(n,v);

    for(auto it : v) {
        cout << it << " ";
    }
}