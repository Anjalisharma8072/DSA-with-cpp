#include <iostream>
using namespace std;
int main(){

    //Sort the array in descending order using Bubble Sort.

    int arr[] = {2,1,3,4,5};
    int n = 5;
    // bool flag = true;
    // for(int i = 0;i<n-1;i++){
    //     for(int j = 0;j<n-1-i;j++){
    //         if(arr[j]<arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //             flag = false;

    //         }
    //     }
    //     if(flag==true) break;
    // }

    // for(int ele:arr){
    //     cout<<ele<<" ";
    // }



//Check if the given array is almost sorted. (elements are at-most one position away).

    //     int check = 0;
       
    //    for(int i = 0;i<n-1;i++){
    //     bool flag  = true;
    //     for(int j = 0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //             flag= false;

    //         }
    //     }
    //         if(flag==true)break;
    //        check++;
                
            
        
       
    // }
    //   for(int ele:arr){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
    // cout<<check<<endl;

    // if(check>1)cout<<false;
    // else cout<<true;


int k = 3;
    for(int i = 1;i<n;i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }

    }

    cout<<arr[k];








}