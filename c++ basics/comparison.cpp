#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  char s;
  cin>>a>>s>>b;
  if(s == '<'){
    if(a<b){
      cout<<"RIGHT"<<endl;
  }}
  if(s == '>'){
    if(a>b){
      cout<<"Right"<<endl;
    }}
  if(s == '='){
    if(a==b){
      cout<<"Right"<<endl;
    }
  }
  else {
    cout<<"Wrong"<<endl;
  }
}