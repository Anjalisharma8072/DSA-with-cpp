#include <iostream>
#include <vector>
using namespace std;



int main(){


    //a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.

    // vector <vector <int> > v(5,vector <int> (5,10));

    // for(int i =0 ;i<5;i++){
    //     for(int j = 0;j<5;j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


   

   //Write a program to add two matrices and save the result in one of the given matrices.


    // int m,n;
    // cout<<"Enter number of rows : ";
    // cin>>m;
    // cout<<"Enter number of columns : ";
    // cin>>n;
    // //First Matrix
    // int arr1[m][n];

    // for(int i = 0;i<m;i++){
    //     for(int j = 0;j<n;j++){
    //         cin>>arr1[i][j];
    //     }
    // }

    //  for(int i = 0;i<m;i++){
    //     for(int j =0;j<n;j++){
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // //Second Matrix
    // int arr2[m][n];
    // for(int i = 0;i<m;i++){
    //     for(int j = 0;j<n;j++){
    //         cin>>arr2[i][j];
    //     }
    // }
    //  for(int i = 0;i<m;i++){
    //     for(int j =0;j<n;j++){
    //         cout<<arr2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // //additon
    // for(int i = 0;i<m;i++){
    //     for(int j =0;j<n;j++){
    //         arr1[i][j] = arr1[i][j]+arr2[i][j];
    //     }
    // }

    // //Print final matrix

    //  for(int i = 0;i<m;i++){
    //     for(int j =0;j<n;j++){
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }









//Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
//rectangle from (l1,r1) to (l2, r2).


    // int m,n,l1,r1,l2,r2;
    // cout<<"Enter number of rows : ";
    // cin>>m;
    // cout<<"Enter number of columns : ";
    // cin>>n;
    // //First Matrix
    // int A[m][n];

    // for(int i = 0;i<m;i++){
    //     for(int j = 0;j<n;j++){
    //         cin>>A[i][j];
    //     }
    // }

    //  for(int i = 0;i<m;i++){
    //     for(int j =0;j<n;j++){
    //         cout<<A[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"Enter coordinates of top-left : ";
    // cin>>l1>>r1;
    // cout<<"Enter coordinated of bottom-left : ";
    // cin>>l2>>r2;
    // int sum = 0;
    // for(int i = l1 ; i<=l2;i++){
    //     for(int j = r1;j<=r2;j++){
    //         sum+=A[i][j];
    //     }
    // }

    // cout<<sum;



   


    //Write a program to print the row number having the maximum sum in a given matrix.

    
    // int m,n;
    // cout<<"Enter number of rows : ";
    // cin>>m;
    // cout<<"Enter number of columns : ";
    // cin>>n;
    // //First Matrix
    // int arr1[m][n];

    // for(int i = 0;i<m;i++){
    //     for(int j = 0;j<n;j++){
    //         cin>>arr1[i][j];
    //     }
    // }

    //  for(int i = 0;i<m;i++){
    //     for(int j =0;j<n;j++){
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int maxsum=0;
    // int maxrow;
    // for(int i = 0;i<m;i++){
    //     int sum= 0;
    //     for(int j= 0;j<n;j++){
    //         sum+=arr1[i][j];
    //     }
    //     if (sum>maxsum) {
    //         maxsum = sum;
    //         maxrow = i;
    //     } 

    // }

    // cout<<maxrow;









    //-------mid rows and column-------------------------




    // int m,n;
    // cout<<"Enter number of rows : ";
    // cin>>m;
    // cout<<"Enter number of columns : ";
    // cin>>n;
    // //First Matrix
    // int arr1[m][n];

    // for(int i = 0;i<m;i++){
    //     for(int j = 0;j<n;j++){
    //         cin>>arr1[i][j];
    //     }
    // }

    //  for(int i = 0;i<m;i++){
    //     for(int j =0;j<n;j++){
    //         cout<<arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"----------------"<<endl;
    // int mid = m/2;
    // for(int i= 0;i<m;i++){
    //     for(int j = 0;j<n;j++){
    //         if(i==mid || j==mid) cout<<arr1[i][j]<<" ";
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }
    






  //-----------0 to rows and column------------------


    int m,n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    int arr[m][n];

    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }


    //print

     for(int i = 0;i<m;i++){
        for(int j =0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    bool flag = false;
    for(int k = 0;k<m;k++){
        for(int l = 0;l<n;l++){
            if(arr[k][l]==0){
                for(int j = 0;j<n;j++){
                    arr[k][j]=0;
                }
                for(int i = 0;i<m;i++){
                    arr[i][l]=0;
                }

                flag = true;
                break;
            
            }
        }

        if(flag ==true) break;
   
    }



    for(int i = 0;i<m;i++){
        for(int j =0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }







   


























}