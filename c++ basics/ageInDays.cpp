#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
  int n;
  cin>>n;
  int remYears = n/365;
  cout<<remYears<<" Years"<<endl;
  int remDays = n%365;
  int remMonths = remDays/30;
  cout<<remMonths<<" Months"<<endl;
  int days = remDays%30;
  cout<<days <<" Days"<<endl;
}