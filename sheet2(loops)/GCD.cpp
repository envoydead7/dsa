#include <bits/stdc++.h>
using namespace std;

int gcd(long long a, long long b){ //brute force solution
    const int smaller = (a < b) ? a : b;
    int gcd = 1;
    for(int i = 1; i <= smaller; i++){
      if(a%i == 0 && b%i == 0){
        gcd = i;
      }
    }
    return gcd;
  }

int gcdEuclidean(long long a, long long b) { //efficient solution
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
int main(){
  long long a, b;
  cin>>a>>b;
  cout<<gcd(a,b)<<endl;
  return 0;
}