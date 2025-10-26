#include <iostream>
using namespace std;

int main(){
    int arr[] = {0,1,3,4,5,6,7,8};


    //Linear Search

    // for(int i = 0;i<8;i++){
    //     if(arr[i]!=i){
    //         cout<<i;
    //         break;
    //     } 
    // }

    //Binary Search
    int lo = 0;
    int hi = 7;
    int ans = -1 ;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(mid==arr[mid]){
            lo=mid+1;
        }else {
            ans=mid;
            hi=mid-1;
        }
    }

    cout<<ans;
}