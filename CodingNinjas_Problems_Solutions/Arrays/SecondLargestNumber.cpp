/*
Second Largest Number
Problem statement
You have been given an array ‘a’ of ‘n’ unique non-negative integers.

Find the second largest and second smallest element from the array.
Return the two elements (second largest and second smallest) as another array of size 2.

Example :
Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
Output: [4, 2]
The second largest element after 5 is 4, and the second smallest element after 1 is 2.

Sample Input 1 :
4
3 4 5 2
Sample Output 1 :
4 3
Explanation For Sample Input 1 :
The second largest element after 5 is 4 only, and the second smallest element after 2 is 3.


Sample Input 2 :
5
4 5 3 6 7
Sample Output 2 :
6 4


Expected Time Complexity:
O(n), Where ‘n’ is the size of an input array ‘a’.

Constraints:
2 ≤ 'n' ≤ 10^5
0 ≤ 'a'[i] ≤ 10^9

Time limit: 1 sec
*/

#include<iostream>
#include<vector>
using namespace std;

int secondLargest(int n, vector<int> arr) {
    int sLargest = INT_MIN;
    int Largest = arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i] > Largest) {
            sLargest = Largest;
            Largest = arr[i];
        }
        else if (arr[i] > sLargest && arr[i] != Largest) {
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int secondSmallest(int n, vector<int> arr) {
    int sSmallest = INT_MAX;
    int Smallest = arr[0];
    for(int i=0;i<n;i++) {
         if(arr[i] < Smallest) {
            sSmallest = Smallest;
            Smallest = arr[i];
        }
        else if (arr[i] < sSmallest && arr[i] != Smallest) {
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int sSmallest = secondSmallest(n,a);
    int sLargest = secondLargest(n,a);
    return {sLargest,sSmallest};
}


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    arr = getSecondOrderElements(n,arr);
    for(auto it : arr) {
        cout << it << " ";
    }cout << endl;
    return 0;
}