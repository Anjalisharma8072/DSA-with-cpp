#include <iostream>
using namespace std;
int main(){

    //---------------------------triplet pair sum equal to target-----------------------

    // int arr[] = {12,3,6,1,6,9};
    // int size = sizeof(arr)/sizeof(arr[4]);
    // // cout<<size;
    // int a = 1;
    // int b  = 2;
    // int x = 24;
    // for(int i  = 0;i<=size-3;i++){
    //     for(int j  = a;j<=size-2;j++){
    

    //         for(int k  = b;k<=size-1;k++){
    //             if(arr[i]+arr[j]+arr[k]==x){
    //                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
    //             }

    //         }
    //         b++;
      
          
    //     }
    //     a++;
    //     b=b-2;
    // }

        //---------------triplet pw method --------------------------
        // int count = 0;
        // for(int i  = 0;i<=size-1;i++){
        //     for(int j  = i+1;j<size;j++){
        //         for(int k = j+1;k<size;k++){
        //             if(arr[i]+arr[j]+arr[k]==x){
        //                 count++;
        //             }
        //         }
        //     }
        // }
        // cout<<count;






//---------------------------------Factorial of a larger Number------------------










//------------------First Non repeating element--------------------
int n ;
cout<<"Enter a number : ";
cin>>n;
int arr[n];
for(int i  = 0;i<n;i++){
    cin>>arr[i];
}



int c  = false;
for(int l  = 0;l<n;l++){
    int a;
    for(int m  =0;m<n;m++){
        if((l!=m)&&(arr[l]==arr[m])){
            a=1;
            break;
         
        }
        else{
            a=0;
        }
       
    }  


    if(a==0){
        cout<<arr[l];
        c= true;
        break;
    }
  

    

}
if(!c){
    cout<<"None";
}








//-------------------Move 0 to end-----------------------
// int arr[] = {0,0,1,2,3};
// int size = sizeof(arr)/sizeof(arr[0]);

// for(int i  = 0;i<size;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

// int i  = 0;
// int j  = 1;


// while(j<size){
//     if(arr[i]==0 && arr[i]<arr[j]){
//         int temp = arr[j];
//         arr[j] = arr[i];
//         arr[i] = temp;
//         i++;
//         j++;
//     }
//     else{
//         j++;
//     }
// }
// for(int i  = 0;i<size;i++){
//     cout<<arr[i]<<" ";
// }



//--------------------------Count number of elements greater than x---------------------
// int n;
// cout<<"Enter Size of an array : ";
// cin>>n;
// int arr[n];
// for(int i  = 0;i<n;i++){
//     cin>>arr[i];
// }

// for(int i  = 0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

// int x;
// cout<<"Enter a number : ";
// cin>>x;
// int count = 0;
// for(int i  = 0;i<n;i++){
//     if(arr[i]==x) count++;
// }
// cout<<count;




//------------------Largest 3 number--------------------
// int arr[5] = {10,3,1,21,3};
// int max1 = 0,max2 = 0 , max3 = 0;
// for(int i =  0;i<5;i++){
//     if(arr[i]>max1){
//         max3 = max2;
//         max2 = max1;
//         max1 = arr[i];
//     }
//     else if(arr[i]>max2){
//         max3 = max2;
//         max2 = arr[i];
//     }

//     else if(arr[i]>max3){
//         max3 = arr[i];
//     }

  
// }

// cout<<max1<<" "<<max2<<" "<<max3;



//------------check if array is sorted or not--------------
// int arr[5] = {3,2,2,4,7};
// int i  = 0 ,j=0;
// bool flag = true;
// while(j<5){
//     if(arr[i]>arr[j]){
//         flag = false;
//         break;
//     }
//     else{
//         flag = true;
//     }
//     j++;
// }
// if(flag==false) cout<<"Not sorted";
// else cout<<"Sorted";





//-----------------difference of sum of value at odd places and even places------------------------


// int arr[5] = {7,2,32,5,30};
// int even_sum = 0;
// int odd_sum = 0;
// for(int i  = 0;i<5;i++){
//     if(i%2==0) even_sum+=arr[i];
//     else odd_sum+=arr[i];
// }

// cout<<"Difference is : "<<even_sum-odd_sum;




//--------------------even-increment by10 and odd next multiple of value ---------------

// int arr[5] = {7,3,32,5,20};
// for(int i = 0;i<5;i++){
//     if(i%2==0) arr[i]+=10;
//     else arr[i]*=2;
// }

// for(int i  = 0;i<5;i++){
//     cout<<arr[i]<<" ";
// }





























}