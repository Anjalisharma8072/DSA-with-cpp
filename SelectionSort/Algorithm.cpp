#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {5,7,1,4,2};
    int n = 5;


    //foreach loop

    for(int ele:arr){
        cout<<ele<<" ";
    }
   
    cout<<endl;


    for(int j = 0;j<n-1;j++){
        int minimum=INT_MAX;
        int a=-1;
        for(int i = j;i<n;i++){
            if(arr[i]<minimum) {
                minimum=arr[i];
                a=i;
            };
    }
    // cout<<minimum<<endl;
    // cout<<arr[j]<<endl;

    swap(arr[j],arr[a]);

 }

     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
   
   
}