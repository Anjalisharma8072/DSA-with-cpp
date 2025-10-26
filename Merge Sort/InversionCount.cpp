#include <iostream>
#include <vector>
using namespace std;
int Inversion(vector <int>& a,vector <int>& b){
    int count = 0;
    int i = 0;
    int j = 0;
    while(i<a.size()&&j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }else i++;
    }
    return count;
}
void merge(vector <int>& a,vector<int>& b,vector <int>& res){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n1 && j<n2) if(a[i]<=b[j]) res[k++] = a[i++];
    else res[k++] = b[j++];
    if(i==n1) while(j<n2) res[k++] = b[j++];
    if(j==n2) while(i<n1) res[k++] = a[i++];
}
int MergeSort(vector <int>& v){
    int c = 0;
    int n = v.size();
    if(n==1) return 0;
    int n1 = n/2,n2 = n-n/2;
    vector<int>a(n1),b(n2);
    for(int i = 0;i<n1;i++){
        a[i] = v[i];
    }
    for(int j = 0;j<n2;j++){
        b[j] = v[n1+j];
    }
    c+=MergeSort(a);
    c+=MergeSort(b);
    c+=Inversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
    return c;
}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    cout<<MergeSort(v)<<endl;
    for(int ele:v){
        cout<<ele<<" ";
    }
  
}
