#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows : ";
    cin>>m;
    int n ;
    cout<<"Enter number of columns : ";
    cin>>n;
    int arr[m][n];
    //Taking Input
    for(int i  = 0;i<m;i++){
        for(int j  = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //Printing Elements
    cout<<"2-D  Array : "<<endl;
    for(int i  = 0;i<m;i++){
        for(int j  = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}