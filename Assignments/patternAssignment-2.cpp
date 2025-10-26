#include <iostream>
using namespace std;
int main(){
//     int n ;
//     cout<<"Enter a number : ";
//     cin>>n;
    
//     for(int i =1;i<=n;i++){
//         for(int j =1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=2*i-1;k++){
//             cout<<k;
//         }
     
        
//         cout<<endl;
    
// }


// ----------------------------------

// int n;
// cout<<"Enter a number : ";
// cin>>n;

// for(int i =1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     int a = 65;
//     for(int k =1;k<=2*i-1;k++){
//         cout<<(char)a;
//         a++;
       
//     }
    
//     cout<<endl;
// }



// -------------------------------------
// cout<<"Enter a number : ";
// int n;
// cin>>n;
// for(int i =1;i<=n;i++){
    
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";

//     }
    

//     int a = 65;
//     for(int k = 1;k<=i;k++){
//         cout<<(char)a;
//         a++;
       
//     }
    
//     cout<<endl;
// }



// ---------------------
// int n;
// cin >> n;
// for(int i = 1; i <= n; ++i) {
// for(int j = 1; j <= n - i; ++j) {
// cout << " ";
// }
// for(int j = i-1; j >= 0; --j) {
// cout << (char)('A'+j) << " ";
// }
// for(int j = 1; j < i; ++j) {
// cout << (char)('A'+j) << " ";
// }
// cout << endl;
// }




// ----------------------

int n;
cout<<"Enter a number : ";
cin>>n;
int m =n-1;
for(int i =1;i<=m;i++){
    int a = 65;
    for(int j=1;j<=m+1-i;j++){
    cout<<(char)a;
    a++;
    }
    for(int k =1;k<=2*i-1;k++){
        cout<<" ";
    }
    int b =69;
    for(int j=1;j<=m+1-i;j++){
        cout<<(char)b;
        b++;
   
    }
    b++;
   

    cout<<endl;
}























}