#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  //bubble sort
  for (int pass = 0; pass < n - 1; pass++) {
    for (int i = 0; i < n - 1 - pass; i++) {
      if (A[i] > A[i + 1]) {
        // Swap A[i] and A[i+1]
        int temp = A[i];
        A[i] = A[i + 1];
        A[i + 1] = temp;
      }
    }
  }
  // Selection Sort implementation
  for (int i = 0; i < n - 1; i++) {
    // Find the index of the minimum element in A[i..N-1]
    int min_index = i;
    for (int j = i + 1; j < n; j++) {
      if (A[j] < A[min_index]) {
        min_index = j;
      }
    }
    // Swap A[i] with A[min_index]
    int temp = A[i];
    A[i] = A[min_index];
    A[min_index] = temp;
  }

  for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
  }
}