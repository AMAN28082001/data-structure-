#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int lcm=(n/__gcd(n,k)*k)/k;
    cout<<lcm<<endl;
}