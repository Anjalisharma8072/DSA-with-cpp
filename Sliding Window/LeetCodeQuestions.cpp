#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
//LeetCode -1052(grumpy Bookstore Owner)

    // int customers[]={9,10,4,5};
    // int grumpy[]={1,0,1,1};
    // int n = sizeof(customers)/sizeof(customers[0]);
    // int minutes = 1;
    //     if(n==1){
    //         if(grumpy[0]==0 ||grumpy[0]==1 ) return customers[0];
    //     };
    //     int maxIdx = 0;
    //     int sum = 0;
    //     for(int i = 0;i<minutes;i++){
    //         if(grumpy[i]==1)  sum+=customers[i];
          
        
    //     }
    //    int  maxSum = sum;
    //     int i = 1;
    //     int j = minutes;
    //     while(j<n){
    //         if(grumpy[j]==1) sum+=customers[j];
    //         if(grumpy[i-1]==1) sum-=customers[i-1];
            
    //         if(sum>maxSum){
    //             maxSum= sum;
    //             maxIdx = i;
    //         }
    //         i++;
    //         j++;
    //         cout<<maxIdx<<endl;
    //     }
    // cout<<maxSum<<endl;
    // cout<<maxIdx<<endl;
    //    for(int i = maxIdx; i<maxIdx+minutes;i++){
    //         if(grumpy[i]==1) grumpy[i] = 0;
    //    }
    //    cout<<endl;
    //    for(int i = 0; i<n;i++){
    //         cout<<grumpy[i]<<" ";
    //    }
    //     cout<<endl;
    //    int maxCustomer = 0;

    //    for(int i = 0;i<n;i++){
    //     if(grumpy[i]==0) maxCustomer+=customers[i];
    //    }
    
        

    // cout<<maxCustomer<<endl;
    // cout<<maxIdx<<endl;



    

    //LeetCode209---------------------------------






    //LeetCode713------------------------
    // int arr[]={10,5,2,6};
    // int k = 100;
    // int n1 = sizeof(arr)/sizeof(arr[0]);
    // vector<int>nums(arr,arr+n1);
    //  int n = nums.size();
    //     int i = 0,j=0;
    //     int count = 0;
    //     int prod = 1;
    //     while(i<n){
    //         prod=prod*nums[j];
    //         cout<<prod<<endl;
    //         if(prod<k){
    //             j++;
    //             count++;
    //         }
    //         if(j==n-1){
    //             i++;
    //             j=i;
    //             prod = 1;
    //         }
    //         else{
    //             i++;
    //             j=i;
    //             prod = 1;
    //         }
    //     }
      
    //     cout<<count;



        // string s="ABAB";
        // int k = 2;
        // int n = s.length();
        // int flips = 0;
        // int i = 0,j = 1;
        // int len;
        // int maxlen = INT_MIN;
        // while(j<n){
        //     if(s[j-1]==s[j]){
        //         j++;
        //         cout<<j<<endl;

        //     }
        //     else{
        //         if(flips<k){
        //             flips++;
        //             j++;
        //         }else{
        //             len = j-i;
        //             maxlen = max(len,maxlen);
        //             while(s[i]==s[j])i++;
        //             i++;
        //             j++;
        //         }
        //     }
        // }
        // len = j-i;
        // cout<<i<<" "<<j<<endl;
        // cout<<len<<endl;
        // maxlen = max(len,maxlen);
        // cout<<maxlen;

        string arr1[] = {"t","ae","bp","k","bs","q","jn","lu"};
        string arr2[]={"y","mu","k","pp","t","c","n","r"};
        int n1 = sizeof(arr1)/sizeof(arr1[0]);
        int n2 = sizeof(arr2)/sizeof(arr2[0]);
        vector<string>message(arr1,arr1+n1);
        vector<string>bannedWords(arr2,arr2+n2);
        sort(message.begin() , message.end());
         sort(bannedWords.begin() , bannedWords.end());
        int count = 0;
        int i = 0;
        int j = 0;
        while(i<n1 && j<n2){
            if(message[i]<bannedWords[j]) i++;
            else if(message[i]>bannedWords[j])j++;
            else{
                i++;
                j++;
                count++;
                cout<<count<<endl;
            }
        }
        if(count>=2) cout<<true;
        else cout<< false;
        
        

    
    
}