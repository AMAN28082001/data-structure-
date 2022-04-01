#include<bits/stdc++.h>
using namespace std;
int bt(int arr[],int l,int h,int a){
    while(l<=h){
        int mid;
        mid=(l+h)/2;
        if(arr[mid]==a){
            return mid;
        }
        else if(arr[mid]<a){
            l=mid+1;
        }
        else {
            h=mid-1;
        }
    }
    return -1;
    
}
int main(){
  int arr[]={2,3,4,5,6,7};
  int a=21;
  int l=sizeof(arr)/sizeof(arr[0]);
  int abc=bt(arr,0,l-1,a);
  if(abc==-1){
      cout<<"Element not found "<<endl;
  }
  else{
      cout<<"Element found at index "<<abc+1<<endl;
  }
}