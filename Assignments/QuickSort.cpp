#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& v,int si,int ei){
    int count = 0;
    int randomPivot = v[(si+ei)/2];
    for(int i = si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(v[i]< randomPivot) count++;
    }
    int pivotIdx = si+count;
    swap(v[ (si+ei)/2],v[pivotIdx]);
    int i = 0;
    int j = ei;
    while(i<j){
        if(v[i]<=randomPivot) i++;
        if(v[j]>=randomPivot) j--;
        else if(v[i]>randomPivot && v[j]<randomPivot){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

void QuickSort(vector<int>& v,int si,int ei){
    if(si>=ei) return;
    int pi = partition(v,si,ei);
    QuickSort(v,si,pi-1);
    QuickSort(v,pi+1,ei);

}






int main(){
    int arr[] = {3, 8, 6, 7, 5, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int ele:v) cout<<ele<<" ";
    cout<<endl;
    // QuickSort(v,0,n);
    
    //Input: A[] = [3, 8, 6, 7, 5, 9, 10]
    //Output: A[] = [3, 5, 6, 7, 8, 9, 10]
    // int i = 0;
    // int j = n-1;
    // while(i<j){
    //     if(v[i]<v[j]){
    //         i++;
    //         j--;
    //     }
    //     else swap(v[i],v[j]);
    // }
    partition(v,0,n-1);
    for(int ele:v) cout<<ele<<" ";
    cout<<endl;

}