#include <iostream>
using namespace std;

// ---------------------Square of First N numbers--------------------
int square(int n ){
    return n*n;
}

// ------------------Area of a Circle-----------------------------
float AreaOfCircle(float r){
    return 3.14*r*r;
}


// -----------------------Odd Numbers-----------------------
void odd(int x,int y ){ 
    for(int i =x;i<=y;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
        
    }
}

// -------------------------------Count digit and sqaure--------------
int count(int x){
    int sum=0;
    while(x!=0){
        int rem = x%10;
        if(rem!=0){
            sum++;
        }
        x/=10;
    }
    return square(sum);
}






int main(){
    // int x;
    // cout<<"Enter a number: ";
    // cin>>x;
    // for(int i =1;i<=x;i++){
    //     cout<<square(i)<<endl;       // Sqaure function call
    // }



    // --------------------------------------------------------

    // int n;
    // cout<<"Enter Radius of a Circle : ";
    // cin>>n;
    // cout<<AreaOfCircle(n);  // AreaOfCircle Function Call


    // -------------------------------------
    // int n,m;
    // cout<<"Enter a number : ";
    // cin>>n;
    // cout<<"Enter a number : ";
    // cin>>m;
    // odd(n,m);   //Odd function call



    // --------------------------------
    // int n;
    // cout<<"Enter a digit : ";
    // cin>>n;
    // cout<<count(n);     //count function call




}