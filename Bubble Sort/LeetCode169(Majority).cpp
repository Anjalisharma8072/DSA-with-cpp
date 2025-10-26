#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

    vector<int>v;
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    int n = 7;
   sort(v.begin(),v.end());
   
    cout<<v[n/2];


}