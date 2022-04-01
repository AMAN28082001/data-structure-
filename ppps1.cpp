#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    long long k=c/a;
    while(((k*a)+b)>c){
        k--;
    }
    cout<<(a*k)+b<<endl;
    return 0;
}