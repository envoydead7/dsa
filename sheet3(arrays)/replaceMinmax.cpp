#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int max = 0;
  int min = 0;
  for(int i=0;i<n;i++){
    if(arr[i]>arr[max]){      //Earlier mistake was took max=INT_Min and min=INT_max and then checking for values less than
      max = i;                // greater than and updating the value in min and max and swapping the values not the indices
    }                         // as I was not printing min and max there was no way of them getting printed
    else if(arr[i]<arr[min]) {
      min = i;
    }
  }
  swap(arr[min], arr[max]);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}