#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,X,K;
    cin>>N>>X>>K;
    int a[N],b[N];
    int count=0;
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        cin>>b[i];
    }
    for(int i=0;i<N;i++){
        if((b[i]-a[i])<=K){
            count++;
        }
    }
    if(count>=N){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}