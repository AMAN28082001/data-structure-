#include<bits/stdc++.h>
using namespace std;
int main(){
    int S,A,B,C;
    cin>>S>>A>>B>>C;
    if(S+((S*C)/100)>A && S+((S*C)/100)<B){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 return 0;
}