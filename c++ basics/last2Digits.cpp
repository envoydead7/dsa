#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c, d;
    cin>>a>>b>>c>>d;
    long long sum1 = a*b%100;
    long long sum2 = sum1*c%100;
    long long sum3 = sum2*d%100;
    if (sum3<10) {
        cout<<"0"<<sum3<<endl;
    }
    else {
        cout<<sum3<<endl;
    }
}