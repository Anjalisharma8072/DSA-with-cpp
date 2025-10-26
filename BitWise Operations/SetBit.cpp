#include <iostream>
using namespace std;

int setbit(int num){
    int result = __builtin_popcount(num);
  
    return result;
}

//Brian kernighan's Algorithm

int set_bit_count(int num){
    int count = 0;
    while(num>0){
        count++;
        num= num &(num-1);
    }
    return count;
}



int main(){
    cout<<setbit(23)<<endl;
    cout<<set_bit_count(23)<<endl;

}