#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    vector <int> v;

    //Inserting Values
    v.push_back(5);
    v.push_back(50);
    // //v[1] = 80;                              // XX - Not a correct way produce garbage value = 0
    v.push_back(10);
    v.push_back(11);

    //Accessing Elements

    cout<<v[0]<<" ";

    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}