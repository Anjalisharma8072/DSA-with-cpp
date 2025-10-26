#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(40);
    v.push_back(20);
    v.push_back(2);
    v.push_back(10);
    v.push_back(1); 
    for(int i =0;i<=4;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    //at function
    v.at(0) = 4;
    cout<<v.at(0)<<endl;

    for(int i =0;i<=4;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;


    //Sorting
    sort(v.begin(), v.end()); 
     for(int i =0;i<=4;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;


}