#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if((a>0&&b>0)&&(a<6&&b<6)){
    int sum=a+b;
    if(sum%2==0){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
    }
    }
}