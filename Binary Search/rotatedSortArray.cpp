#include <iostream>
using namespace std;

int main(){
    int arr[] = {28,33,1,3,4,8,20};
    int max = 0;
    int pivot = 0;
    int target =33;
    for(int i =0;i<7;i++){
        if(arr[i]>max){
            max = arr[i];
            pivot = i;
        }
    }

    // cout<<pivot;

    int lo = 0;
    int hi = pivot;
    if(target>=arr[lo] && target<=arr[hi]){
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid]==target) {
                cout<<mid;
                break;
            }
            else if(target<arr[mid]) hi=mid-1;
            else lo=mid+1;
        }
    }else{
        lo = pivot+1;
        hi = 6;
         while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid]==target){
                cout<<mid;
                break;
            }
            else if(target<arr[mid]) hi=mid-1;
            else lo=mid+1;

    }
}



}