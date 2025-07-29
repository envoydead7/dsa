//solved on 21/06/2025
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of arr elements: ";
    cin>>n;
    vector<int>arr;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int max_so_far = INT_MIN;
    int min_so_far = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max_so_far) max_so_far = arr[i];
        if (arr[i] < min_so_far) min_so_far = arr[i];
    }
    cout<<"Maximum value is: "<<max_so_far<<endl;
    cout<<"Minimum value is: "<<min_so_far<<endl;
}