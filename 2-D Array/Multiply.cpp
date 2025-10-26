#include <iostream>
using namespace std;
int main(){

    cout<<"---------------Matrix - 1------------------";
    cout<<endl;
    int n,m;
    cout<<"Enter number of rows(n) : ";
    cin>>n;   //rows
    cout<<"Enter Number of columns (m): ";
    cin>>m;   //columns


    int a[n][m];

    for(int i = 0;i<n;i++){
        for(int j = 0 ;j<m;j++){
            cin>>a[i][j];
        }
        
    }
    cout<<endl;
     for(int i = 0;i<n;i++){
        for(int j = 0 ;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"-----------Matrix - 2----------------------";
    cout<<endl;
    int p,l;
    cout<<"Enter number of rows(p) : ";
    cin>>p;   //rows
    cout<<"Enter Number of columns(l) : ";
    cin>>l;   //columns

    int b[p][l];

    for(int i = 0;i<p;i++){
        for(int j = 0 ;j<l;j++){
            cin>>b[i][j];
        }
       
    }
    cout<<endl;

    for(int i = 0;i<p;i++){
        for(int j = 0 ;j<l;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    if(n==l){
        cout<<"---------------Resultant Matrix-------------------";
        cout<<endl;
        
        int r[n][l];
        int sum = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<l;j++){
                for(int k = 0;k<p;k++){

                    sum=sum+(a[i][k] * b[k][j]);

                }
                
                r[i][j] = sum;
                sum=0;
            }
        }



    
        for(int i = 0;i<n;i++){
            for(int j = 0 ;j<l;j++){
                cout<<r[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

    }
    else cout<<"Multiplication not possible";








}