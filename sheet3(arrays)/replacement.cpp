#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    if(arr[i]>0){
      arr[i] = 1;
    }
    else if(arr[i]<0){
      arr[i] = 2;
    }
  }
  for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}