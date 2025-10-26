#include <iostream>
using namespace std;

//palindrome number-----------

void Palindrome(int n,int z,int sum){
    if(n==0){
        if(sum==z){
            cout<<"True";
            return;
        }
        else{
            cout<<"False";
            return;
        }
    }

    int rem = n%10;
    Palindrome(n/10,z,(sum*10)+rem);
}

// palindrome string-------

void Palindrome2(string str,int i,int j,bool flag){
   if(i>=j){
    if(flag) cout<<"True";
    else cout<<"False";
    return;
   }
    

    
    if(str[i]!=str[j]){
        Palindrome2(str,i+1,j-1,false);
        return;
    }
    
    Palindrome2(str,i+1,j-1,true);

}

//pw concise method-------------

bool pal(string str,int i,int j){
    if(i>=j) return true;
    if(str[i]!=str[j]) return false;
    else return pal(str,i+1,j-1);
}
int main(){
    // Palindrome(152,152,0);
    string str = "madam";
    cout<<pal(str,0,str.size()-1);
}