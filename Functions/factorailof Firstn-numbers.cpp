#include <iostream>
using namespace std;

int fact(int x){
    int sum = 1;
    for(int i =1;i<=x;i++){
        sum=sum*i;
        cout<<sum<<endl;

    }
    
}
int main(){

   fact(0);


}