#include <iostream>
using namespace std;
int main(){
    // int arr[]={1,2,3,5,4};
    // int n=5;

    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    // //Sorting 

    // for(int i = 0;i<n-1;i++){
    //         bool flag = true;
    //     for(int j = 0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]) {
    //             swap(arr[j],arr[j+1]);
    //             flag=false;
    //         };
    //     }
    //     if(flag==true) break;
    // }

    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }




    //CHecking whether an array is sorted or not
    // bool flag = true;
    // for(int i = 0;i<n-1;i++){
    //     if(arr[i]>arr[i+1]){
    //         flag = false;
    //         break;
    //     }
    // }
    // if(flag==true) cout<<"Sorted";
    // else cout<<"Not Sorted";



    //Sort character String
    string s = "AZYZXBDJKX";
    int n = s.size();
    string str="";
    for(int i = 0;i<n;i++){
        if(s[i]>='X') str+=s[i];
    }

    // cout<<str;
    int size = str.size();
    for(int i = 0;i<size-1;i++){
        bool flag = true;
        for(int j = 0;j<size-1-i;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }

    cout<<str;



}