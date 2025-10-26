#include <iostream>
#include <vector>
using namespace std;
int main(){

    //When Size is given

    // vector <int> v(5);
    // for(int i =0;i<=4;i++){
    //     cin>>v[i];
    // }

    // cout<<endl;

    // for(int i =0;i<=4;i++){
    //     cout<<v[i]<<" ";
    // }

    //When size is not defined
    
    vector <int> a;
    for(int i =0;i<=4;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout<<endl;
    for(int i =0;i<=4;i++){
        cout<<a[i]<<" ";
    }



}