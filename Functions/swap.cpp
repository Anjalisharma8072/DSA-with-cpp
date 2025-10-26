#include <iostream>
using namespace std;

void swap(int a,int b ){
    int c;
    c=b;
    b=a;
    a=c;
    cout<<a<<endl;
    cout<<b;
}

// -----------------------Swap Without Using Extra Variable-----------------
void swapping(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<endl;
    cout<<b<<endl;
}

int main(){

    int x,y;
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter Second Number : ";
    cin>>y;
    swapping(x,y);




}
