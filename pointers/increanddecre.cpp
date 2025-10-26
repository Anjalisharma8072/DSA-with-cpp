#include <iostream>
using namespace std;
int main(){
    // int x = 5;
    // int* ptr = &x;
    // cout<<ptr<<endl;
    // ptr++;
    // cout<<ptr;


    //Address does not exist thats why it gives a weird value

    // int x = 5;
    // int* ptr = &x;
    // cout<<*ptr<<endl;
    // ptr++;
    // cout<<*ptr;              //Not a convient way



    int x = 5;
    int* ptr = &x;
    cout<<*ptr<<endl;
    // *ptr=*ptr+1;
    (*ptr)++;          //always to put in brackets
    cout<<*ptr;  
}