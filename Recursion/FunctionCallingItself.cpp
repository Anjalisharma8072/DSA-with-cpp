#include <iostream>
using namespace std;


void fun(int n){
    if(n==0) return;
    cout<<"Thank You CW"<<endl;
    fun(n-1);
}

void greet(int n){
    if(n==0) return;
    cout<<"Good Morning"<<endl;
    greet(n-1);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    greet(n);
    fun(n);
}