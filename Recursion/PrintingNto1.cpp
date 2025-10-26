#include <iostream>
using namespace std;
// Nto1
void printing(int n){
    if(n==0) return;
    cout<<n<<endl;
    printing(n-1);
}

//1toN
void print(int n,int c){
    if(c>n) return;   //base case
    cout<<c<<endl;    //kaam
    print(n,c+1);     //recursive call
   
}


// after recursive call method

void chapo(int n ){
    if(n==0) return;
    chapo(n-1);
    cout<<n<<endl;
}


int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
  
    chapo(x);
}