#include <iostream>
using namespace std;
//follow Euler Tree


//2jumps
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1) + stair(n-2);
    
}

//3jumps 

int sidi(int n){
    if(n==1) return 1;
    if(n==3 || n==2) return 2;
    return stair(n-1) + stair(n-3);
    
}


int main(){
    
    int n;
    cout<<"Enter number of stairs : ";
    cin>>n;
    cout<<sidi(n);
}