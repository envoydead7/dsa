#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin>>n;
  long long arr[n];
  long long max=0;
  for(long long i=0;i<n;i++){
    cin>>arr[i];
  }
  for(long long i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  cout<<max<<endl;
}