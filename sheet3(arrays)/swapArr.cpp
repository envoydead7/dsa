#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows in the array : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int low = 0, high = n - 1;
    while (low<high) {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}