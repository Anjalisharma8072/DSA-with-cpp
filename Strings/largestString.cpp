#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    vector <string> v(n);
    cout<<"Enter elements of vector : ";
    for(int i = 0;i<v.size();i++){
        cin>>v[i];
       
    }

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    cout<<endl;
    int max = stoi(v[0]);
    string maxs = v[0];
    for(int i = 0;i<v.size();i++){
        int a = stoi(v[i]);
        if(a>max) {
            max = a;
            maxs= v[i];

        }
    }

    cout<<maxs;




}