#include <iostream>
#include <vector>
using namespace std;

void Traversing(int i , vector <int> &v){
    if(i==v.size()) return;
    cout<<v[i]<<" ";
    Traversing(i+1,v);
}

//maximum

int maxs(int arr[],int n,int i,int max){
    if(i==n) return max;
    if(arr[i]>max){
        max = arr[i];
        return maxs(arr,n,i+1,max);
    }
    return maxs(arr,n,i+1,max);
}

int max2(int arr[],int n,int i){
    if(i==n) return INT_MIN;
    return max(arr[i],max2(arr,n,i+1));

}
      

int main(){

        vector<int>v;
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        v.push_back(6);
    

        int arr[] = {1,2,3,8,5,2,995};
        int n = sizeof(arr)/sizeof(arr[0]);
        cout<<max2(arr,n,0);
    
   
}