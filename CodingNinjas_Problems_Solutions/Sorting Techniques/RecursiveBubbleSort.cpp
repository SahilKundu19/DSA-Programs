#include<iostream>
using namespace std;

void recursiveBubbleSort(int arr[], int n) {
    if( n==1 ) {
        return;
    } 
    int flag = 0;
    for(int j=0;j<=n-2;j++) {
        if(arr[j] > arr[j+1]) {
            swap(arr[j],arr[j+1]);
            flag = 1;
        }
    }
    if(flag == 0) {
        return;
    }
    recursiveBubbleSort(arr,n-1);

}

int main() {
    int n;
    cout << "Enter the no. of elements: ";
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    recursiveBubbleSort(arr,n);
    cout << "Sorted Array:\n";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}