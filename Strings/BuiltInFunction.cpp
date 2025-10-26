#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str = "Anjali Sharma";

    //size()
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;

    //add element
    str.push_back('a');
    cout<<str<<endl;

    //delete element
    str.pop_back();
    cout<<str<<endl;

    //concatenate
    string a =" cute";
    cout<<str + a<<endl;

    //reverse
    reverse(str.begin()+2,str.begin()+5);
    cout<<str<<endl;
}