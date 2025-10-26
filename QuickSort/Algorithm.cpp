#include <iostream>
using namespace std;


// int partition(int arr[],int si,int ei){
//     int pivotElement = arr[(si+ei)/2];
//     int count = 0;
//     for(int i = si;i<=ei;i++){
//      if(i==(si+ei)/2) continue;
//         if(arr[i]<=pivotElement) count++;
//     }
//     int pivotIdx = count+si;
//     swap(arr[(si+ei)/2],arr[pivotIdx]);

//     int i = si;
//     int j = ei;
//     while(i<pivotIdx && j>pivotIdx){
//         if(arr[i]<=pivotElement) i++;
//         if(arr[j]>=pivotElement) j--;
//         else if(arr[i]>pivotElement && arr[j]<pivotElement){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
//     return pivotIdx;

// }
// void quickSort(int arr[],int si,int ei){
//     if(si>=ei) return;  //1
//     int pi = partition(arr,si,ei);   //2
//     quickSort(arr,si,pi-1);   //3
//     quickSort(arr,pi+1,ei);  //4
// }


//2nd time

int partition(int arr[] , int startIdx,int endIdx){
    int pivotElement = arr[(startIdx+endIdx)/2];
    int count = 0;
    for(int i = startIdx;i<=endIdx;i++){
        if(i==(startIdx+endIdx)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = startIdx+count;
    swap(arr[(startIdx+endIdx)/2],arr[pivotIdx]);
    int i = startIdx;
    int j = endIdx;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>=pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

void quickSort(int arr[],int startIdx , int endIdx){
    if(startIdx>=endIdx) return;
    int pivotIdx = partition(arr,startIdx,endIdx);
    quickSort(arr,startIdx,pivotIdx-1);
    quickSort(arr,pivotIdx+1,endIdx);
}

int main(){

    int arr[]={5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =  0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i =  0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}