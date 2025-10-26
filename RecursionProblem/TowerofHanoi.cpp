#include <iostream>
#include <vector>
using namespace std;
//a-source , b=helper , c = destination
void Hanoi(int n , char a,char b, char c) {
    if(n==0) return;
    Hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    Hanoi(n-1,b,a,c);
}


int main(){


    Hanoi(2,'A','B','C');
   
}