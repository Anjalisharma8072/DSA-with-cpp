#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
     for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    //size function

    cout<<"size"<<v.size()<<endl;

    //Capacity function
    cout<<"capactiy"<<v.capacity()<<endl;

    //pop_back() function
    v.pop_back();

    cout<<"size"<<v.size()<<endl;

    //Capacity function
    cout<<"capacity"<<v.capacity()<<endl;

    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}