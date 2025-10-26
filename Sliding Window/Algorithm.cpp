#include <iostream>
using namespace std;

int main(){
    // int arr[]={7,1,2,5,8,4,9,3,6};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int k = 4;
    // int maxSum = INT_MIN;
    // int maxIdx = -1;
    // int sum = 0;
    // for(int i = 0;i<k;i++){
    //     sum+=arr[i];
    // }
    // maxSum = sum;

    // //sliding window
    
    // int i = 1;
    // int j = k;
    // while(j<n){
    //     sum = sum+arr[j]-arr[i-1];
    //     if(sum>maxSum){
    //         maxSum = sum;
    //         maxIdx=i;
    //     }
    //     i++;
    //     j++;
    // }

    // cout<<maxSum<<endl;
    // cout<<maxIdx<<endl;



    //practice--------------------

    // int arr[] = {2,8,9,5,6};
    // int n = sizeof(arr)/sizeof(arr[0]);
    
    // int k = 2;
    // int sum = 0;
    // for(int i = 0;i<k;i++){
    //     sum+=arr[i];
    // }
    // int maxSum = sum;
    // int i = 1,j=k;
    // while(j<n){
    //     sum = sum+arr[j]-arr[i-1];
    //     if(sum>maxSum) maxSum = sum;
    //     i++;
    //     j++;
    // }
    // cout<<maxSum;


    //leetcode 1876---------------------------------

    string s = "xyzzaz";
      int n = s.length();
        string sum;
        int k = 3;
        for(int i = 0;i<k;i++){
            sum+=s[i];
        }
        int  count = 0;
        // cout<<sum;
        // sum = sum+s[3];
        // sum.erase(sum.begin()+0);
        // cout<<sum;
         if(sum[0]!=sum[1] && sum[1]!=sum[2] && sum[2]!=sum[0]) count++;
        int i = 1;
        int j = k;
        while(j<n){
            sum.erase(sum.begin()+0);
            sum = sum+s[j];
            // int a = (int)sum[0];
            // int b = (int)sum[1];
            // int c = (int)sum[2];
            // if(a!=b && b!=c && c!=a) count++;
            if(sum[0]!=sum[1] && sum[1]!=sum[2] && sum[2]!=sum[0]) count++;
            
            i++;
            j++;

        }
        cout<<count;
   



}