#include <iostream>
using namespace std;



int main(){

    int c = 4;
    int flag=false;
    for(int i  = 1;i<=c;i++){
        int a = i+1;
        if((i*i)+(a*a)==c){
            flag = true;
        }
    }
    cout<<flag;

 
}