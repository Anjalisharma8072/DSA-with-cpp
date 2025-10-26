#include <iostream>
using namespace std;

void BinaryString(string ans,int n){        
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    BinaryString(ans+'0',n-1);
    if(ans=="" || ans[ans.length()-1] == '0')   BinaryString(ans+'1',n-1);
  
  
    
}

int main(){
    BinaryString("",3);
}