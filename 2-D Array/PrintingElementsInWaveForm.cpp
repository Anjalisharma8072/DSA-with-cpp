#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;
    int a[n][m];

    for(int i = 0;i<n;i++){
        for(int j = 0 ;j<m;j++){
            cin>>a[i][j];
        }
        
    }

    // for(int i = n-1;i>=0;i--){
    //     if(i%2==0){
    //         for(int j = 0;j<m;j++){
    //             cout<<a[i][j]<<" ";
    //         }
    //     }else{
    //         for(int j = m-1;j>=0;j--){
    //             cout<<a[i][j]<<" ";
    //         }
    //     }
    // }


    //------------Column wise printing------------------

    for(int j = 0;j<m;j++){
        if(j%2==0){
            for(int i = 0;i<n;i++){
                cout<<a[i][j]<<" ";
            }
        }else{
            for(int i = n-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }

        }
       
    



    }

}




   
     
     
    
  
