#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,4,3,2,5};

    //address of array to pointer

    int* ptr = arr;
    // cout<<ptr<<endl;
    // cout<<&arr[0];

    //Updating

    // ptr[0] = 8;

    //accessing element using pointer

    // for(int i =0;i<=4;i++){
    //     cout<<ptr[i]<<" ";
    // }


    //Modifying Without square bracket


    *ptr = 8;        
    ptr++;              //Pointing to second element of array
    *ptr = 10;        
    ptr--;             //Pointing to first element of array
    

    //Displaying without []

    
    for(int i =1;i<=5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

   ptr=arr;
}

