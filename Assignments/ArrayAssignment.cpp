#include <iostream>
using namespace std;
int main(){


    // -------------------Product----------------------------
    //  int n;
    // cout<<"Enter size of array : ";
    // cin>>n;
    // int arr[n];
    // for(int i = 0 ;i<=n-1;i++){
    //     cin>>arr[i];
    // }
    // int product = 1;
    // for(int i = 0;i<=n-1;i++){
    //     product*=arr[i];
    // }
    // cout<<product;



    //-------------------Duplicates Elements-----------------

    //  cout<<"Enter size of an array : ";
    //  int n ;
    //  cin>>n;
    // int arr[n];
    // cout<<"Enter NUmbers : ";
    // for(int i = 0;i<=n-1;i++){
    //     cin>>arr[i];
    // }

    // bool flag  = false;
    // for(int k =0;k<=n-1;k++){
    //      int duplicate = arr[k];
    //      for(int i = 0 ;i<=n-1;i++){
    //      if( (k!=i )&& (duplicate==arr[i])) flag = true;
    
            
    //     }
    
    // }
    // if(flag==true) cout<<"Duplicate Elements";
    // else cout<<"No Duplicate Elements";



    //--------------------Predict output----------------------
    // int sub[50], i ;
    // for ( i = 0 ; i <= 48 ; i++ ) 
    // {
    // sub[i] = i ;
    // cout<<sub[i]<<endl ;
    // }



    //----------------------Missing element in sorted array-------------
//     int arr[4] = {1,2,7,9};
//     int smallest = 1;
//     for(int i =0;i<=3;i++){
//     if(smallest==arr[i]) smallest++;
// }
// cout<<smallest;



//-----------------Second Larget element in one pass-------------------------

int arr[5] = {8, 5, 1, 8, 2};
//Smallest positive integer value
    int first_max = INT_MIN;
    int second_max = INT_MIN;


    for(int i = 0; i < 4; i++) {
        if(arr[i] > first_max) {
            second_max = first_max;
            first_max = arr[i];
        } else if(arr[i] > second_max && arr[i] != first_max) {
            second_max = arr[i];
        }
    }

    if (second_max == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << second_max << endl;
    }


























}