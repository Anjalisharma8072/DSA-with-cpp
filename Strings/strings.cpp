#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "Anjali";
    // cout<<str;

    //Taking input
    
    string name;
    // cin>>name;    //only if string has no spaces
    // cout<<name;



    //get line method--------

    getline(cin,name);
    cout<<name<<endl;

    //Indexing

    cout<<name[1];

}