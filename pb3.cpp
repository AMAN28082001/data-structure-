#include<iostream>
using namespace std;
int fd(int n){
    while(n>10){
        n=n/10;
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    cout<<fd(n);
}