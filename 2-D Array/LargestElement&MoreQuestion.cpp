#include <iostream>
using namespace std;
int main(){
    cout<<"Matrix - 1 :"<<endl;
    int m ;
    cout<<"Enter number of rows :";
    cin>>m;
    int n ;
    cout<<"Enter number of columns : ";
    cin>>n;
    int arr1[m][n];
    for(int i  = 0;i<m;i++){
        for(int j  =0;j<n;j++){
            cin>>arr1[i][j];
        }
    }

    //Maximum Element

    // int max = 0;
    //  for(int i  = 0;i<m;i++){
    //     for(int j  =0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //         if(arr[i][j]>max) max = arr[i][j];
    //     }
    //     cout<<endl;
    // }

    // cout<<max;


    //-------------------Sum of Elements-------------------
    //   int sum=0; 
    //   for(int i  = 0;i<m;i++){
    //     for(int j  =0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //         sum+=arr[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<"sum - "<<sum;
   


    //-----------------Sum of 2 Matrix---------------------------

    cout<<"Matrix -2 : "<<endl;
    cout<<"Enter number of rows :";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    int arr2[m][n];
    for(int i  = 0;i<m;i++){
        for(int j  =0;j<n;j++){
            cin>>arr2[i][j];
        }
    }
    int arr3[m][n];
    cout<<"Matrix After Addition : "<<endl;
    for(int i  = 0;i<m;i++){
        for(int j  =0;j<n;j++){
            arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
   
    }

    for(int i  = 0;i<m;i++){
        for(int j  =0;j<n;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }








}