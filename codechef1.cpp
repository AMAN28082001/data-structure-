#include<bits\stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
    int N,X,P;
    cin>>N>>X>>P;
    if((3*X)+((N-X)*-1)>=P){
        cout<<"PASS"<<endl;
    }
    else{
        cout<<"FAIL"<<endl;
    }
    }
    return 0;
}