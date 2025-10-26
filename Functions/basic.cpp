#include <iostream>
#include<cmath>
using namespace std;

void greeting(){
    cout<<"Hello C++"<<endl;;
}


void starTriangle(int n){    //Arguments
      for(int i =1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
      }
} 

int sum(int x,int y){
    return x+y;
}

int mini(int x,int y){
    if(x<y) return x;
    else return y;
}

int main(){
    // greeting() ;    //Function Call
    // greeting();

    // cout<<sum(8900,800);

    // cout<<mini(2,4);


    // built in function
    cout<<max(5,6)<<endl;

    cout<<sqrt(100);
}