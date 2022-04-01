#include<bits\stdc++.h>
using namespace std;
int main(){
    // array<int,5>arr;
    // arr.fill(5);
    //  int s=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<s;i++){
    //     cout<<arr[i]<<" ";
    // array<int,5>arr={1,3,4,5,6};
    // for(auto it= arr.begin(); it!=arr.end();it++){
    //     cout<<*it<<" ";
    // }
    // for(auto it= arr.rbegin(); it!=arr.rend();it++){
    //     cout<<*it<<" ";
    // }
    // for(auto it= arr.end()-1; it>=arr.begin ();it--){
    //     cout<<*it<<" ";
    // }
    
    // for(auto it:arr){
    //     cout<< it <<" ";
    // // }
    // string s="ksjhsjhhh";
    // for(auto c:s){
    //     cout<<c<<" ";
    // }
    // cout<<arr.size()<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr.back()<<endl;
    // vector<int> arr;
    // cout<<arr.size()<<endl;
    // arr.push_back(0);
    // arr.push_back(1);
    // cout<<arr.size()<<endl; 
    //  vector<int> arr1(4,0);
    //  vector<int> arr2(4,8);
    //  vector<int> arr3(arr2.begin(),arr2.end());
     vector<vector<int>> vec;
     vector<int> raj1;
     raj1.push_back(1);
     raj1.push_back(2);

     vector<int> raj2;
     raj2.push_back(10);
     raj2.push_back(20);

     vector<int> raj3;
     raj3.push_back(19);
     raj3.push_back(24);
     raj3.push_back(27);

     vec.push_back(raj1);
     vec.push_back(raj2);
     vec.push_back(raj3);

     for(auto vect: vec){
         for(auto it: vect){
             cout<< it <<" ";
         }
         cout<<endl;
     }

}