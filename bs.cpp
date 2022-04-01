#include<bits/stdc++.h>
using namespace std;
int bt(int arr[],int l,int h,int a){
    if(l>h){
        return -1;
    }
    else{
        int mid=(l+h)/2;
        if(arr[mid]==a){
            return mid;
        }
        else if(arr[mid]<a){
          return  bt(arr,mid+1,h,a);
        }
        else{
           return  bt(arr,l,mid-1,a);
        }
    }
}
int main(){
 int arr[]={6,3,7,9,2,5};
 int a=3;
 int l=sizeof(arr)/sizeof(arr[0]);
 sort(arr,arr+l);
//  for(int i=0;i<l;i++){
//      cout<<arr[i]<<" ";
//  }
 int abc=bt(arr,0,l-1,a);
 if(abc==-1){
     cout<<"element not found"<<endl;
 }
 else{
     cout<<"element found at"<<abc<<endl;
 }
}