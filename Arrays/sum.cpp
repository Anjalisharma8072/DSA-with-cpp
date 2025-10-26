#include <iostream>
using namespace std;
int main(){
    
    int num[4] = {4,5,3,2};
    int sum = 0;
    for(int i =0;i<=3;i++){
        sum=sum+num[i];
    }
    cout<<sum;
}