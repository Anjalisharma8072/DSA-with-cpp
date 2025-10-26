#include <iostream>
using namespace std;

int partition(int arr[],int si,int ei){
    int pivotEle = arr[(si+ei)/2];
    int count = 0;
    for(int i=si;i<=ei;i++){
        if(arr[i]<pivotEle) count++;
    }
    int pi = count+si;
    swap(arr[(si+ei)/2],arr[pi]);
    int i = si;
    int j = ei;
    while(i<=pi && j>=pi){
        if(arr[i]<=pivotEle) i++;
        if(arr[j]>=pivotEle) j--;
        else if(arr[i]>pivotEle && arr[j]<pivotEle){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    
    }
    return pi;
}

int quickSelect(int arr[],int si,int ei,int k){
    int pi = partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if (pi+1>k) return quickSelect(arr,si,pi-1,k);
    else return quickSelect(arr,pi+1,ei,k);

}


//----------------------------Tc - o(n)------------------------------------------------------------------

int main(){
    int arr[] = {5,9,10,3,6,7,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<quickSelect(arr,0,n-1,k);
    cout<<endl;
     for(int ele:arr){
        cout<<ele<<" ";
    }

}
