#include <iostream>
#include <vector>
using namespace std;

//Inversion Count
int Inversion(vector<int>& a , vector<int>& b){
    int count = 0;
    int i = 0;
    int j = 0;
   while(i<a.size() && j<b.size()){
     if(a[i]>b[j]){
        count+=(a.size()-i);
        j++;
    }else i++;
   }
    return count;
}

void merge(vector<int>& res,vector<int>& a,vector<int>& b){
    int i=0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size()){
        while(j<b.size())res[k++] = b[j++];
    }
    if(j==b.size()){
        while(i<a.size())res[k++] = a[i++];
    }
}

int MergeSort(vector<int>& v){
    int c = 0;
    int n = v.size();
    if(n==1) return 0;
    int n1 = n/2,n2=n-n/2;
    vector<int>a(n1),b(n2);
    for(int i = 0;i<n1;i++){
        a[i]=v[i];
    }
    for(int j = 0;j<n2;j++){
        b[j] = v[j+n1];
    }
    c+=MergeSort(a);
    c+=MergeSort(b);
    c+=Inversion(a,b);
    merge(v,a,b);
    a.clear();
    b.clear();
    return c;
    
}




//merge Sort
// void merge(vector<int>& a,vector<int>& b,vector<int>& v){
//     int n1 = a.size();
//     int n2 = b.size();

//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while(i<n1 && j<n2){
//         if(a[i]<b[j]){
//             v[k] = a[i];
//             i++;
//             k++;
//         }else{
//             v[k] = b[j];
//             j++;
//             k++;
//         }
//     }
//     if(i==n1) while(j<n2) v[k++] = b[j++];
//     if(j==n2) while(i<n1) v[k++] = a[i++];

// }


// void MergeSort(vector<int>& v){
//     int n = v.size();
//     if(n==1) return;
//     int n1 = n/2,n2 = n-n/2;
//     vector<int>a(n1),b(n2);
//     for(int i = 0;i<n1;i++){
//         a[i] = v[i];
//     }
//     for(int j = 0;j<n2;j++){
//         b[j] = v[j+n1];
//     }

//     MergeSort(a);
//     MergeSort(b);

//     merge(a,b,v);
//     a.clear();
//     b.clear();
// }

//Inversion Count


int main(){
    int arr[] = {2,4,3,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int>v(arr,arr+n);
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<MergeSort(v)<<endl;
    for(int ele:v){
        cout<<ele<<" ";
    }

}