#include <iostream>
#include <vector>
using namespace std;

void Subset(string result ,string original,int i){
    if(i == original.size()) {
        cout<<result<<endl;
        return;
    }
    char ch = original[i];
    Subset(result,original,i+1);
    Subset(result+ch,original,i+1);
}

void Subset2(string result ,string original,int i){
    if(i == original.size()) {
        cout<<result<<endl;
        return;
    }
    char ch = original[i];
    Subset(result,original,i+1);
    Subset(result+ch,original,i+1);
}



int main(){

    Subset("","abb",0);

   
}