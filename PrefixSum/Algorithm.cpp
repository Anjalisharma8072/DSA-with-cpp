#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // int arr[] = {5,4,6,4,7};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 1;i<n;i++){
    //     arr[i]+=arr[i-1];
    // }
    // for(int ele:arr){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
    // //numtiple queries
    // //1-3
    // int sum = arr[3]-arr[0];
    // cout<<sum;

    // string customers = "YYNY";
    // int n = customers.size();
    //     //N
    // vector<int>N(n+1,0);
    // int no = 0;
    // for(int i = 0;i<n+1;i++){
    //     N[i] = no;
    //     if(customers[i]=='N') no++;
    // }
    // // for(int ele:N){
    // //     cout<<ele<<" ";
    // // }
    //  vector<int>Y(n+1,0);
    //     int yes = 0;
    //     for(int i =n;i>=0;i--){
    //         Y[i] = yes;
    //         if(customers[i-1]=='Y') yes++;
    //     }
    // //     for(int ele:Y){
    // //     cout<<ele<<" ";
    // // }

    // for(int i = 0;i<n+1;i++){
    //         N[i] = N[i]+Y[i];
    //     }

    //  int min = INT_MAX;
    //     int min_idx;
    //     for(int i = 0;i<n+1;i++){
    //         if(N[i]<min){
    //             min = N[i];
    //             min_idx = i;
    //         }
    //     }
    //     cout<< min_idx;

    //     int arr[] = {-1,-8,0,5,-9} ;
    //     int n1 =  sizeof(arr)/sizeof(arr[0]);
    //     vector<int>satisfaction(arr,arr+n1);
    //  int n = satisfaction.size();
    //     sort(satisfaction.begin(),satisfaction.end());
    //     int idx = 0;
    //     bool flag = false;
    //     for(int i = 0;i<n;i++){
    //         if(satisfaction[i]>=0){
    //             idx = i;
    //             flag = true;
    //             break;
    //         }
    //     }
    //     cout<<idx<<endl;
    //     if(flag==false) cout<<0;
        

    //     int psum = 0;
    //     int pa = 1;
    //     for(int i = idx;i<n;i++){
    //         psum = psum+pa*satisfaction[i];
    //         pa++;
    //     }
    //     cout<<psum<<endl;
    //     int nsum = 0;
    //     int presum = 0;
    //     int na = 1;
    //     int a = 1;
    //    if(idx!=0){
    //     for(int i = idx-a;i>=0;i--){
    //         for(int j = i ;j<n;j++){
    //         nsum = nsum+na*satisfaction[j];
    //         na++;
    //     }
    //     na=1;
    //     presum=0;
    //     nsum=0;
    //     a++;
    //     if(nsum>presum) presum=nsum;
    //     else break;

    //     }

    // cout<<presum<<endl;

       
    //    }
    //     if(psum>presum) cout<< psum;
    //     else cout<< presum;

    int arr[] = {2,1,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>nums(arr,arr+n);
    vector<int>right(n,0);
    right[0] = nums[0];
    for(int i = 1;i<n;i++){
        right[i] = right[i-1]+nums[i];
    }
    for(int ele:right){
        cout<<ele<<" ";
    }

        
        
}