#include <iostream>
using namespace std;

int fact(int x){
    int sum=1;
    for(int i =1;i<=x;i++){
        sum=sum*i;
    }
    return sum;
}

int combination(int n,int r){
    int x=fact(n);
    int y= fact(r);
    int c = fact(n-r);
    int result = x /(y*c);
    return result;

}



int main(){
    // -------------------------Pascal Triangle-------------------------
//     cout<<"Enter a number : ";
//     int n;
//     cin>>n;
//    for(int i =0;i<=n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<combination(i,j)<<" ";
//     }
//     cout<<endl;
//    }



// -------------------Optimized pascal triangle$$$$-------------###
int n ;
cout<<"Enter a number : ";
cin>>n;

 for(int i =0;i<=n;i++){
    int current = 1;
    for(int j=0;j<=i;j++){
        cout<<current<<" ";
        current = current*(i-j)/(j+1);
    }
    cout<<endl;
   }




}