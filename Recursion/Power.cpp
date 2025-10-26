#include <iostream>
using namespace std;

int power(int a,int b){
    
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
    
   
    
}

// o(log n) - time complexity

int pow(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    int ans = pow(a,b/2);
    if(b%2==0) return ans*ans;
    else return ans*ans*a;
    
   
    
}

int main(){
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    int a = pow(3,3);
    cout<<a;

}