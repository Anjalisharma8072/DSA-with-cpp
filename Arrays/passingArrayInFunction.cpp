#include <iostream>
using namespace std;
//Pass By Reference

void display(int a[],int size){   
    for(int i =0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

void change(int a[]){
    a[1] = 1000;
}
int main(){

    int arr[5] = {3,5,3,2,6};
    int size = sizeof(arr) /sizeof(arr[0]); 
    cout<<size<<endl;
    display(arr,size);
    change(arr);
    display(arr,size);

}