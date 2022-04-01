#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[0];
    for(int i=1;i<=100000;i++){
        if(i%2!=0){
            N=N-1;
            cout<<i<<" ";
            if(N<=0){
              break;
            }
        }
        cout<<endl;
    }
}