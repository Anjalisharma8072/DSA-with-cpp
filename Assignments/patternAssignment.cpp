#include <iostream>
using namespace std;
int main(){

    cout<<"Enter a number : ";
    int n ;
    cin>>n;

    // for(int i  =1;i<=n;i++){
    //     for(int j =1;j<=n;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // -----------------------------

    // for(int i =1;i<=n;i++){
    //     for(int j =1;j<=n+1-i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // -------------------------------

    // for(int i =1;i<=n;i++){
    //     int a = 65;
    //     for(int j =1;j<=i;j++){
    //         cout<<(char)a;
    //         a++;

    //     }
    //     cout<<endl;
    // }


    // --------------------------------
    
    // for(int i =1;i<=n+1;i+=2){
    //     for(int j =1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    //     int a = 65;
    //     for(int k =1;k<=i+1;k++){
    //         if(i==n+1) break;
    //         cout<<(char)a;
    //         a++;

    //     }
    //     cout<<endl;
    // }


    // -------------------------------------
    
    // for(int i =1;i<=n;i++){
    //     for(int j =1;j<=n;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // ------------------------------
    int m;
    cout<<"Enter column : ";
    cin>>m;
    for(int i =1;i<=n;i++){
        for(int j =1 ; j<=m;j++){
            cout<<"*";
            if(i==j && i==n-1) continue;
        
        }
        cout<<endl;
    }















































}