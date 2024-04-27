/*
Traffic

Problem statement
The Road Department is planning to make some new traffic regulations. But to make the regulations they need to analyze the current situation of the traffic.

The traffic can be analyzed from an array 'VEHICLE' of length 'N' , which consists of ‘0’ if there is no vehicle at that point and ‘1’ if there is a vehicle at the point.

Unfortunately the array ‘VEHICLE’ got corrupted as at most 'M' '1' got flipped to ‘0’.

Traffic jam is defined as the length of consecutive vehicles on the road.

The Road Department wants to know the worst possible scenario for the traffic jam. Return the maximum possible length of the consecutive vehicles.


Example:
Input: ‘N’ = 3, ‘M’ = 1, VEHICLE’ = [0, 1, 1]
Output: 3
Explanation:
As there is at most one 1 that got flipped to 0, so for the worst-case scenario we can reflip the first(1-based ) index to 1, resulting in a length of 3. 

Sample Input 1:
3 1
0 1 1
Sample Output 1:
3
Explanation Of Sample Input 1 :
As there is at most one 1 that got flipped to 0, so for the worst-case scenario we can reflip the first index (1- based) to 1, resulting in a length of 3. 


Sample Input 2 :
6 3
0 1 0 0 1 0
Sample Output 2 :
5


Constraints:
1  <= N <= 10^6
1 <= M <= N
0 <= VEHICLE[i] <= 1

Time Limit: 1 sec
*/

#include<iostream>
#include<vector>
using namespace std;

int traffic(int n, int m, vector<int> vehicle) {
    int i = 0;
    int j = 0;
    int count = 0;
    int ans = INT_MIN;

    while(j < n) {
        if(vehicle[j] == 0) {
            count++;
        }
        while(count > m) {
            if(vehicle[i] == 0) {
                count--;
            }
            i++;
        }
        ans = max(ans, j-i+1);
        j++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int m;
    cin >> m;

    cout << traffic(n,m,arr) << endl;
    return 0;
}