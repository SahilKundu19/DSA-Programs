/*
Sort 0 1 2

Problem statement
You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

Note :
Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.

Constraints :
1 <= T <= 10
1 <= N <= (5 * (10 ^ 5))
0 <= ARR[i] <= 2

Where 'N' is the size of the given array/list.
And, ARR[i] denotes the i-th element in the array/list.

Time Limit: 1sec 


Sample Input 1 :
2
6
0 1 2 2 1 0
7
0 1 2 1 2 1 2
Sample Output 1 :
0 0 1 1 2 2
0 1 1 1 2 2 2



Sample Input 2 :
2
7
2 2 2 1 1 1 0
6
2 1 2 0 1 0
Sample Output 2 :
0 1 1 1 2 2 2
0 0 1 1 2 2
*/


#include<iostream>
#include<vector>
using namespace std;

void sort012(int *arr, int n) {
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(low <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}


int main() {
    int n;
    cin >> n;
    int arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort012(arr,n);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}