#include<iostream>
using namespace std;
int main(){
    int i,j,n,isprime;
    cin>>n;
    for(i=2;i<=n;i++){
        if(n%i==0){
            isprime=1;
            for ( j = 2; j<i/2; j++)
            {
                if(i%j==0){
                    isprime=0;
                    break;
                }
            }
            if(isprime==1){
                cout<<i<<" ";
            }
            
        }
    }
    return 0;
}