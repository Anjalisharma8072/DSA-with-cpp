#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Permutation(string ans , string original){
    if(original=="") {
        cout<<ans<<endl;
        return;
    }

    for(int i = 0;i<original.length();i++){
        char ch = original[i];
        string right = original.substr(0,i);
        string left = original.substr(i+1);
        Permutation(ans+ch,left+right);
    }
}





int main(){
    Permutation("","abb");
   

}