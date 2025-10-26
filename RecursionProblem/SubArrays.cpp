#include <iostream>
#include <vector>
#include <string>
using namespace std;

void subarray(int arr[],vector <int> v,int i,int n){
    if(i==n){
       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       }
       cout<<endl;
       return;
    }
    subarray(arr,v,i+1,n);
    if(v.size()==0 || arr[i-1]==v[v.size()-1]){
        v.push_back(arr[i]);
        subarray(arr,v,i+1,n);
  
    }
   

}





int main(){
    vector <int> v;
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    subarray(arr,v,0,n);

   
}