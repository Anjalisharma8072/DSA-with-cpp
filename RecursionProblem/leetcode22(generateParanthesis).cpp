#include <iostream>
#include <vector>
#include <string>
using namespace std;

void paranthesis(string result ,int n,int open,int close){
    if(result.length()== 2*n){
       cout<<result<<endl;
    //    cout<<open<<" "<<close<<endl;
       return;
    }
  

    if(open<n){
        paranthesis(result+'(',n,open+1,close);
    }
        
   if(close<open){
        paranthesis(result+')',n,open,close+1);
    }
   
 
}




int main(){
    int n = 2;
   paranthesis("",n,0,0);

}