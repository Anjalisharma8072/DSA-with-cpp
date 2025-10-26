#include <iostream>
using namespace std;

void zigzag(int n){
    if(n==0)return;
    //pre
    cout<<n;
    zigzag(n-1);
    //In
    cout<<n;
    zigzag(n-1);
    //Post
    cout<<n;

}
int main(){
    zigzag(3);
}