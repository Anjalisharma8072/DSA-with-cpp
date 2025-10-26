#include <iostream>
using namespace std;

void greet(int x,int y){
    cout<<"greet-address-x"<<"-"<<&x<<endl;
    cout<<"greet-address-y"<<"-"<<&y;

}
int main(){

    int x = 7;
    int y = 4;
    cout<<"address"<<"-"<<&x<<endl;
    cout<<"address"<<"-"<<&y<<endl;
    cout<<"------------------"<<endl;
    greet(x,y);

}