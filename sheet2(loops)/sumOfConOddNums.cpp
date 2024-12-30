#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int x, y;
    cin>>x>>y;
    int low = min(x,y);
    int high = max(x,y);
    int sum = 0;
    for(int i=low + 1;i<=high-1;i++){
      if(i%2==1){
        sum += i;
      }
    }
    cout<<sum<<endl;
  }
}