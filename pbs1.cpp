#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int lar=(a>b)?(a>c?a:c):(b>c?b:c);
    if(lar<=c){
        cout<<a*(c/a)+b<<endl;
    }
    
}