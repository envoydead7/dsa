#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int evenCount=0, oddCount=0;
    int posCount=0, negCount=0;
    int num=0;
    for(int i = 0;i<n;i++){
      cin>>num;

        if(num%2==0){evenCount++;
        } else oddCount++;

        if(num<0){
            negCount++;
        }
        if (num>0) {
            posCount++;
        }
    }

 cout<<"Even: "<<evenCount<<endl;
 cout<<"Odd: "<<oddCount<<endl;
 cout<<"Positive: "<<posCount<<endl;
 cout<<"Negative: "<<negCount<<endl;

}