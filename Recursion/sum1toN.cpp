#include <iostream>
using namespace std;

int sum(int n){
    // base case
    if(n==1) return 1;
    // recursive case
    return n+sum(n-1);
    
}

//parameterized
void add(int sum,int n){
    if(n==0) {
        cout<<sum;
        return;
    }
    add(n+sum,n-1);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<sum(n)<<endl;
    add(0,n);
}