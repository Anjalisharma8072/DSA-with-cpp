#include <iostream>
using namespace std;

int max_pow_2(int num){
    int temp;
    while(num>0){
        temp = num;
        num = num & (num-1);
    }
  
    return temp;
}





int main(){
    cout<<max_pow_2(24);

}