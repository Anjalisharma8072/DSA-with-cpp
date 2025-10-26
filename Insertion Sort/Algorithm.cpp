#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,3,2,1};
    int n = 4;
    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }

    for(int ele:arr){
        cout<<ele<<" ";
    }
}