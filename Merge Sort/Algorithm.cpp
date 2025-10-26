#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& a , vector<int>& b , vector<int>& res){
    int i = 0;
    int j = 0;
    int k = 0;
    int n1 = a.size(),n2 = b.size();
    while(i<n1 && j<n2){
        if(a[i]<b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i==n1){
        while(j<n2) res[k++] = b[j++];
    }
    if(j==n2){
        while(i<n1) res[k++] = a[i++];
    }
}

void mergeSort(vector<int> &v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2,n2 = n-n/2;
    vector<int>a(n1),b(n2);

    //copy-pasting
    for(int  i =0;i<n1;i++) a[i] =  v[i];
    for(int j = 0;j<n2;j++) b[j] = v[j+n1];

    //recursion
    mergeSort(a);
    mergeSort(b);

    //merging
    merge(a,b,v);

    a.clear();
    b.clear();

    

   
}


//2nd practice

//decreasing order

// void merge(vector<int>& a,vector<int>& b,vector<int>& res){
//     int n1 = a.size();
//     int n2 = b.size();
//     int i = 0;
//     int j = 0;
//     int k = 0;

//     while(i<n1 && j<n2){
//         if(a[i]>b[j]) res[k++] = a[i++];
//         else res[k++] = b[j++];
//     }

//     if(i==n1){
//         while(j<n2){
//             res[k++] = b[j++];
//         }
//     }
//     if(j==n2){
//         while(i<n1){
//             res[k++] = a[i++];
//         }
//     }
// }

// void mergeSort(vector<int>& v){
//     int n = v.size();
//     if(n==1) return;
//     int n1 = n/2,n2 = n-n/2;
//     vector<int>a(n1);
//     vector<int>b(n2);

//     for(int i = 0;i<n1;i++) a[i] = v[i];
//     for(int j = 0;j<n2;j++) b[j] = v[j+n1];

//     mergeSort(a);
//     mergeSort(b);

//     merge(a,b,v);
//     a.clear();
//     b.clear();
// }

int main(){
    // int arr1[] = {3,4,5};
    // int arr2[] = {6,7,8};
    // int n = sizeof(arr1)/sizeof(arr1[0]);
    // int m = sizeof(arr2)/sizeof(arr2[0]);
    // vector<int>a(arr1,arr1+n);
    // vector<int>b(arr2,arr2+m);
    // vector<int>res(n+m);
    // merge(a,b,res);
    // for(int ele:res) cout<<ele<<" ";

    int arr[] = {4,1,5,6,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int>v(arr,arr+n);
    // mergeSort(v);

    for(int ele:v) cout<<ele<<" ";

}
