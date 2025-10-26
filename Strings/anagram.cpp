#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    string t;
    cout<<"Enter first string :";
    getline(cin,s);
    cout<<"Enter Second String : ";
    getline(cin,t);

    //sort
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<endl;
    cout<<t<<endl;

    bool flag = true;
    int i = 0;
    int j  = 0;
    for(;i<s.size();i++,j++){
       if(s[i] !=t[j]) flag = false;
    }

    cout<<flag;
    
   

}