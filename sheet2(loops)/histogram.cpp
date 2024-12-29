#include <bits/stdc++.h>
using namespace std;

int main(){
  char s;
  long long N;
  cin>>s>>N;
  //taking n numbers input
  vector<long long> v(N);
  for(int i=0;i<N;i++){
    cin>>v[i];
  }
  //printing the histogram
  for(int i=0;i<N;i++){
    for(int j=0;j<v[i];j++){
      cout<<s;
    }
    cout<<endl;
  }
}