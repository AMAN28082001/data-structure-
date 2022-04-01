#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,3,2,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int abc[size];
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;i<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            abc[j-1]=0;
        }
        
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"test "<<abc[i]<<endl;
    }
}