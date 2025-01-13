#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int ops = 0;
  while(true){
    bool allEven = true;
    for(int i=0;i<n;i++){
      if(a[i]%2!=0){
        allEven = false;
        break;
      }
    }
    if(!allEven){
      break;
    }
    for(int i=0;i<n;i++){
      if(a[i]%2==0){
        a[i]/=2;
      }
    }
    ops++;
  }
  cout<<ops<<endl;
}

//Optimized approach
#include <iostream>
#include <climits>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int minOperations = INT_MAX;
  for (int i = 0; i < N; i++) {
    int count = 0;
    int num = A[i];
    while (num % 2 == 0) {
      num /= 2;
      count++;
    }
    if (count < minOperations) {
      minOperations = count;
    }
  }

  // If all numbers are odd, minOperations remains 0
  if (minOperations == INT_MAX) {
    minOperations = 0;
  }

  cout << minOperations << endl;
  return 0;
}