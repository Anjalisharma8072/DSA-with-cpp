#include <iostream>
using namespace std;


int sqrt(int x,int lo,int hi){
    if(x==1 || x==0) return x;
    while(hi>=lo){
        long long mid = lo+(hi-lo)/2;
        if(mid*mid==x){
            return mid;
        }else if(mid*mid>x){
                hi=mid-1;
        }else{
            lo=mid+1;
        }
    }

    return lo-1;
}

int main(){
    int n = 1;
    cout<<sqrt(n,1,n-1);
}