#include <iostream>
using namespace std;

int main(){

    // --------------Star Triangle-----------------------

    // cout<<"Enter number of rows : ";
    // int n;
    // cin>>n;
    // for(int i =1;i<=n;i++){
    //     for(int j = 0;j<i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // ------------Reverse Triangle--------------

    //  cout<<"Enter number of rows : ";
    // int n;
    // cin>>n;
    // for(int i =n;i>0;i--){
    //     for(int j = i;j>0;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    // cout<<"Enter number of rows : ";
    // int n;
    // cin>>n;
    // for(int i =1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }






    // 1357----------------------@#############*****



    // cout<<"Enter a number : ";
    // int n;
    // cin>>n;
    // for(int i =1 ; i<=n ;i++){
    //     for(int j = 1; j<=(2*i-1) ;j+=2){
    //         cout<<j;
    //     }

    //     cout<<endl;
    // }



    // ABCD-------------------------------
    // cout<<"Enter row number : ";
    // int n;
    // cin>>n;
    // for(int i = 1;i<=n;i++){
    //     int a = 65;
    //     for(int j = 1 ; j<=n ; j++){
    //         cout<<(char)a;
    //         a++;
    //     }

    //     cout<<endl;
    // }


    // -------------Star plus----------------
    // cout<<"Enter a number :";
    // int n ;
    // cin>>n;
    // int mid = n/2+1;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=n;j++){
    //         cout<<" ";
    //         if(i==mid|| j==mid)
    //         cout<< "*";
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }



    // ------Cross star----------------
    // cout<<"Enter a number : ";
    // int n;
    // cin>>n;
    // for(int i =1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==j || i+j==n+1)
    //         cout<<"*";
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }




    // -------------Floyd's Triangle-----------------------
    // cout<<"Enter a number : ";
    // int n;
    // cin>>n;
    // int a = 1;
    // for(int i =1;i<=n;i++){
    //     for(int j =1 ;j<=i;j++){
    //         cout<<a;
    //         a=a+1;
           

    //     }
    //     cout<<endl;
    // }
    


    // --------------------BinarY triangle (METHOD-1)-------------------
    // cout<<"Enter a number : ";
    // int b;
    // cin>>b;
    // for(int i =1;i<=b;i++){
    //     for(int j =1;j<=i;j++){
    //         if((i+j)%2==0) cout<<1;
    //         else cout<<0;
           
    //     }
    //     cout<<endl;
    // }
    

    // -------------------Binary Trianlge (Method-2)-------------------
    // cout<<"Enter a number : ";
    // int n;
    // cin>>n;
    // for(int i =1 ; i<=n;i++){
    //     int a;
    //     if(i%2!=0) a=1;
    //     else a=0;
    //     for(int j =1 ;j<=i;j++){
    //         cout<<a;
    //         // flipping
    //         if(a==1) a=0;
    //         else a=1;

    //     }
    //     cout<<endl;
    // }



// -------------Star Flipped Triangle-----------------
// cout<<"Enter a number : ";
// int n ;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         if(i+j>n) cout<<"*";
//         else cout<<" ";
//     }
//     cout<<endl;
// }



//   --------------STAR fLIPPED triangle (Method CW) ###########-----

// cout<<"Enter a number : ";
// int n ;
// cin>>n;
// for(int i =1;i<=n;i++){
//     for(int j =1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int k =1;k<=i;k++){
//         cout<<"*";
//     }
//     cout<<endl;
// }





// ------------NumBER fLIPPED tRIANGLE-------------------
// cout<<"Enter a number : ";
// int n ;
// cin>>n;
// for(int i =1;i<=n;i++){
//    for(int j =1;j<=n-i;j++){
//     cout<<" ";
//    }
//    for(int k =1;k<=i;k++){
//     cout<<k;
//    }
//    cout<<endl;
// }




// ----------------RHOMBUS-------------------------
// cout<<"Enter a number : ";
// int n ;
// cin>>n;
// for(int i =1;i<=n;i++){
//     for(int j =1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int k =1;k<=n;k++){
//         cout<<"*";
//     }
//     cout<<endl;
// }




// ----------------Star Pyramid-----------------
// cout<<"Enter a Lines : ";
// int n ;
// cin>>n;
// for(int i =1;i<=n;i++){
//     for(int j =1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int k =1;k<=i;k++){
//     cout<<"*";
// }

//     for(int m =2;m<=i;m++){
//         cout<<"*";
//     }
//  cout<<endl;
    
// }


// Nst ,nsp method--------------------------
// cout<<"Enter number of lines : ";
// int n ;
// cin>>n;
// int nsp =  n-1;
// int nst = 1;
// for(int i =1;i<=n;i++){
//     //spaces
//     for(int j =1;j<=nsp;j++){
//         cout<<" ";
//     }
//     nsp--;
//     //Lines
//     for(int k =1;k<=nst;k++){
//         cout<<"*";

//     }
//     nst+=2;
//     cout<<endl;
// }


// ------------------Number Pyramid Palidrome------------
// cout<<"Enter number of lines : ";
// int n ;
// cin>>n;
// for(int i =1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
    
//     for(int k =i-1;k>=1;k--){
//         cout<<k;
      
//     }
   
    
//     cout<<endl;
// }


// -----------------------Star Diamond----------------------

// cout<<"Enter number of lines : ";
// int n ;
// cin>>n;
// int nsp =  n-1;
// int nst =1; 
// for(int i =1;i<=2*n-1;i++){
//     //spaces
//     for(int j =1;j<=nsp;j++){
//         cout<<" ";
//     }
//     if(i<n) nsp--;
//     else nsp++;
//     //Stars
//     for(int k =1;k<=nst;k++){
//         cout<<"*";

//     }
//     if(i<n) nst+=2;
//     else nst-=2;
//     cout<<endl;
// }


// ------------------------Star Bridge----------------------

// cout<<"Enter a number : ";
// int n ;
// cin>>n;
// int nsp=1;
// int m =n-1;
// for(int i =1;i<=2*n-1;i++){
//     cout<<"*";
// }
// cout<<endl;
// for(int i=1;i<=m;i++){
//     for(int j=1;j<=m+1-i;j++){
//         cout<<"*";
//     }
//     for(int k =1; k<=nsp;k++){
//         cout<<" ";
        
//     }
//     nsp+=2;
//      for(int k=1;k<=m+1-i;k++){
//         cout<<"*";
//      }
//     cout<<endl;
// }




// ----------------------Number Bridge--------------------
// cout<<"Enter number of lines : ";
// int n ;
// cin>>n;
// int m = n-1;
// int nsp=1;
// int a=n+1;
// for(int i =1;i<=2*n-1;i++){
//     cout<<i;
// }
// cout<<endl;
// for(int i =1;i<=m;i++){
//     for(int j=1;j<=m+1-i;j++){
//         cout<<j;
//     }
//     for(int k=1;k<=nsp;k++){
//         cout<<" ";
//     }
//     nsp+=2;
    
//     for(int l = a;l<=2*n-1;l++){
//         cout<<l;
//     }
//     a++;
//     cout<<endl;
// }



// ------------------------Number Spiral-#####$$$$$$$$$$$$######################-----#####################---------------
// cout<<"Enter number of lines : ";
// int n ;
// cin>>n;
// int m =2*n-1;
// for(int i =1;i<=m;i++){
  
//     for(int j =1;j<=m;j++){
//         // Pseudo variables
//         int a=i;
//         int b =j;
//         if(a>n) a=2*n-i;
//         if(b>n) b=2*n-j;
//         // minimum of two cells(i,j)
//         int x=min(a,b);
//         cout<<n-x+1;
//     }
//     cout<<endl;
// }
































}