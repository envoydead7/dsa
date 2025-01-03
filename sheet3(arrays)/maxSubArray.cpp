#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i]; //taking input of n numbers
    }
    vector<long long> result;
    for(int i=0;i<n;i++){
      long long currMax = arr[i];
      for(int j=i;j<n;j++){
        currMax = max(currMax,arr[j]); //taking the max from a[i] and a[j]
        result.push_back(currMax);  //storing max in vector
      }

    }
    for(int i=0;i<result.size();i++){
      cout<<result[i]<<" ";
    }
    cout<<endl;
  }
}