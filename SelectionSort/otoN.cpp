#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]=  {19,12,23,8,16};
    int n = 5;

    //when only positive numbers are in the array
   
//     for(int i = 0;i<n;i++){
//          int idx = -1;
//         int min = INT_MAX;
//          for(int j = 0;j<n;j++){

//            if(arr[j]>0){
//              if(arr[j]<min) {
//              min = arr[j];
//             idx = j;
//         }
//         }
//     }

//     arr[idx] = -(i);
//     }
   
//    for(int ele:arr){
//     cout<<-(ele)<<" ";
//    }



//valid for all cases
    int x = 0;
    vector <int> v(n,0);
    for(int i = 0;i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j = 0;j<n;j++){
            if(v[j] == 0){
                if(min > arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }else continue;
        }
        arr[mindx]=x;
        v[mindx] = 1;
        x++;
    }

    for(int ele:arr){
    cout<<(ele)<<" ";
   }
















}