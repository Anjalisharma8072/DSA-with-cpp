#include <iostream>
using namespace std;
void swap(int* x , int* y ){   //Pass by reference - pass by address
    int temp = *x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a,b;
    cout<<"Enter a numbers : ";
    cin>>a>>b;
    int* x = &a;
    int* y = &b;
    swap(x,y);
    cout<<a<<" "<<b;


}