#include<iostream>
using namespace std;

void recursiveInsertionSort(int arr[], int i, int n) {
    if(i==n) {
        return;
    }
    int j = i;
    while(j>0 && arr[j-1] > arr[j]) {
        swap(arr[j-1], arr[j]);
        j--;
    }
    recursiveInsertionSort(arr,i+1,n);
}

int main() {
    int n;
    cout << "Enter the no. of terms: ";
    cin >> n;

    cout << "Enter the elements: ";
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    recursiveInsertionSort(arr,0,n);
    cout << "Sorted Array:\n";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}