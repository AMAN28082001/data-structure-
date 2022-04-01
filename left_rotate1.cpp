#include<bits/stdc++.h>
using namespace std;
void lto(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void lt(int arr[],int size,int k){
    lto(arr,0,k-1);
    lto(arr,k,size-1);
    lto(arr,0,size-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
     int k;
     cin>>k;
     lt(arr,size,k);
     for(int i=0;i<size;i++){
         cout<<arr[i]<<" ";
     }
}