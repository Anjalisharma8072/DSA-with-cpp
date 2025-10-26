#include <iostream>
using namespace std;

int main(){



    int arr[] = {1,2,4,5,7,8,18,45,52};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;

    //Linear Search TC - O(n)

    // for(int i = 0;i<n;i++){

    //     if(arr[i]>target){
    //         cout<<arr[i-1];
    //         break;
    //     }

    // }

    //Binary Search TC- o(log(n))

    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==target) {
            cout<<arr[mid-1];
            flag = true;
            break;
            }
        else if(arr[mid]<target) lo= mid+1;
        else hi = mid-1;
       
    }
   if(flag==false)  cout<<arr[hi];

}