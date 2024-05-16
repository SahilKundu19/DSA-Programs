/*
Two Sum

Problem statement
Sam want to read exactly ‘TARGET’ number of pages.
He has an array ‘BOOK’ containing the number of pages for ‘N’ books.
Return YES/NO, if it is possible for him to read any 2 books and he can meet his ‘TARGET’ number of pages.

Example:
Input: ‘N’ = 5, ‘TARGET’ = 5
‘BOOK’ = [4, 1, 2, 3, 1] 
Output: YES
Explanation:
Sam can buy 4 pages book and 1 page book.


Sample Input 1:
5 5
4 1 2 3 1
Sample Output 1 :
YES
Explanation Of Sample Input 1:
Sam can buy 4 pages book and 1-page book.



Sample Input 2:
2 1
1 2
Sample Output 2 :
NO


Expected Time Complexity:
O( N ), Where N is the length of the array.


Constraints:
1  <= N <= 10^3
1 <= BOOK[i], TARGET <= 10^6

Time Limit: 1 sec
*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;

string read(int n, vector<int> book, int target) {
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++) {
        int a = book[i];
        int more = target - a;
        if(mpp.find(more) != mpp,end()) {
            return "YES";
        }
        mpp[a] = i;
    }
    return "NO";
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << read(n,arr,target) << endl;
    return 0;
}