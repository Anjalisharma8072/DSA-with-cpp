#include <iostream>
using namespace std;
int main(){
    int arr[3][3] ={1,2,3,4,5,6,7,8,9};

     for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //transpose
    for(int i = 0 ;i<3;i++){
        for(int j  = i+1;j<3;j++){

            int temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;

        }
    }

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //reverse array by row wise

    for(int i = 0;i<3;i++){
        int start = 0;
        int end = 2;
        while(start<end){
            int temp = arr[i][end];
            arr[i][end] = arr[i][start];
            arr[i][start] = temp;

            start++;
            end--;
        }
    }

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}