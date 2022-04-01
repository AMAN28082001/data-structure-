#include<bits/stdc++.h>
using namespace std;
void wave(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
int main(){
    int arr[]={1,2,3,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    wave(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}