#include <iostream>
using namespace std;
int main(){

    // Initilisation and Declaration
    
    // int arr[5] = {2,3,5,1,4};    
    // arr[2] = 3;
    // cout<<arr[2];




    // taking input and printing elements

    // int arr[6];
    // for(int i =0;i<=5;i++){
    //     cout<<"Enter number : ";
    //     cin>>arr[i];
    // }
    //    //printing 

    // for(int i =0;i<=5;i++){
    //     cout<<arr[i]<<endl;
    // }



    //------------------Question-------------------
    int n;
    cout<<"Enter number of student : ";
    cin>>n;
    int arr[n];
    cout<<"Enter marks : ";
    for(int i =0;i<=n-1;i++){
        cin>>arr[i];
    }
   for(int i =0;i<=n-1;i++){
    if(arr[i]<35) cout<<i<<endl;
   }


    

    



}