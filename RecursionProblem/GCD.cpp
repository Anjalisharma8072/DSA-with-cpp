#include <iostream>
using namespace std;

int hcf(int a,int b,int i){
    if(i<2) return 1;
    if(a%i==0 && b%i==0) return i;
    return hcf(a,b,i-1);
}


//Euclid Division Algo (Long Division Method)

//TC - O(log(a+b))

int hcf2(int a,int b){
    if(a==0) return b;
    return hcf2(b%a,a);

}




int main(){
    int a =1000;
    int b = 1001;
    cout<<hcf2(a,b);

}