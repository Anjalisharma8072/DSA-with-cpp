#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> d){
    for(int i =0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;

}


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int ptr1  = m-1;
    int ptr2   = n-1;
    int wrptr  =(m+n)-1;
    while(ptr2>=0){
        if(ptr1>=0 && nums1[ptr1]>nums2[ptr2] ){
            nums1[wrptr] = nums1[ptr1];
            ptr1--;
            wrptr--;
        }

        else{
            nums1[wrptr] = nums2[ptr2];
            ptr2--;
            wrptr--;
        }
    }
}

int main(){

    vector <int> v1;
    vector <int> v2;
  
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
   
   

    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(6);

    display(v1);
    display(v2);

    merge(v1,v1.size(),v2,v2.size());

    display(v1);


    // int i=0;
    // int j = 0;
    // int k= 0;
    // int m  = v1.size();
    // int n =  v2.size();
    // vector <int> v3(m+n);
    
    // while(i<=m-1 && j<=n-1){
    //     if(v1[i]<v2[j]){
    //         v3[k] = v1[i];
    //         i++;
    //     }
    //     else{
    //         v3[k] = v2[j];
    //         j++;
    //     }
    //     k++;
    // }

    // //for remmaining elements 
    // if(i==m){
    //     while(j<=n-1){
    //         v3[k] = v2[j];
    //         j++;
    //         k++;
    //     }
    // }

    // if(j==n){
    //     while(i<=m-1){
    //         v3[k] = v1[i];
    //         i++;
    //         k++;
    //     }

    // }
    // display(v3);

}