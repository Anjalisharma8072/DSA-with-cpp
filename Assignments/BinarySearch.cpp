#include <iostream>
using namespace std;

int main(){
    //Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array--?

    // int arr[]={1,2,3,3,4,4,4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int x = 4;
    // int lo = 0;
    // int hi = n-1;
    // while(lo<=hi){
    //     int mid = lo+(hi-lo)/2;
    //     if(arr[mid]==x){
    //         if(arr[mid+1]!=x){
    //             cout<<mid;
    //             break;
    //         }else lo=mid+1;
    //     }else if(arr[mid]<x) lo=mid+1;
    //     else hi=mid-1;
    // }




    //Given a sorted binary array, efficiently count the total number of 1’s in it.

    // int arr[]={0,0,1,0,1,1};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int lo=0;
    // int hi = n-1;
    // int count = 0;
    // while(lo<=hi){
    //     int mid = lo+(hi-lo)/2;
    //     if(arr[mid]==1){
    //         count++;
    //         lo=mid+1;
    //     }
    //     else if(arr[mid]<1) lo=mid+1;
    //     else hi=mid-1;
    // }

    // cout<<count;




    //Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the----?

    // int arr[5][5]={{1,0,1,1,1},{1,1,1,1,1},{0,1,1,1,1},{0,0,0,0,1}};

    // int n=5;
    // int count=0;
    // int rowcount=-1;
    // int row = -1;
    // for(int i  = 0;i<n;i++){
    //     int lo=0;
    //     int hi=n-1;
    //     while(lo<=hi){
    //         int mid = lo+(hi-lo)/2;
    //         if(arr[i][mid]==1){
    //             count++;
    //             lo=mid+1;
    //         }else if(arr[i][mid]<1) lo=mid+1;
    //         else hi=mid-1;
    //     }
    //     cout<<count<<endl;
    //     if(count>rowcount){
    //         rowcount = count;
    //         row = i;
    //     }
          
       
        
    //     count=0;
        

     
    // }
    // cout<<row;


    //Given an array of integers nums containing n + 1 integers where each integer is in the range---?


    // int arr[]={1,1};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int lo = 0;
    // int hi= n-1;
    // bool flag = false;
    // int middle = lo+(hi-lo)/2;

    // while(lo<=hi){
    //     int mid = lo+(hi-lo)/2;
    //     if(arr[mid]==arr[mid-1] || arr[mid]==arr[mid+1]){
    //         cout<<arr[mid];
    //         flag = true;
    //         break;
    //     }else{
    //         hi=mid-1;
    //     }
    // }

    // if(flag==false){
    //     lo=middle;
    //     hi=n-1;
    //     while(lo<=hi){
    //         int mid = lo+(hi-lo)/2;
    //         if(arr[mid]==arr[mid-1] || arr[mid]==arr[mid+1]){
    //         cout<<arr[mid];
    //         break;
    //     }else{
    //         lo=mid+1;
    //     }

    // }

    // }


    //Q6. You have n coins and you want to build a staircase with these coins.

    int n = 5;
    int ans = 0;
    for(int i =1;i<=n;i++){
        ans+=i;
        if(ans>n){
            cout<<i;
            break;
        }
    }


}
    







