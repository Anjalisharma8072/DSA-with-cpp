#include <iostream>
using namespace std;


int main(){

    int x = 20;
    int* ptr = &x;
    int** ptr2 = &ptr;  //Double Pointers
    cout<<ptr<<endl;
    cout<<ptr2;
  
}