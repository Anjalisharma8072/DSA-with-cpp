#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string of even numbers : ";
    getline(cin,str);
    // cout<<str.size();
    int a  =  (str.size())/2;
    // reverse(str.begin(),str.begin()+a);
    // cout<<str;


    //reverse position(2to5)
    reverse(str.begin()+1,str.begin()+5);
    cout<<str;
}